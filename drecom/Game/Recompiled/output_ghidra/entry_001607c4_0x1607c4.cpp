#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_001607c4
// Address: 0x1607c4 - 0x160804
void entry_001607c4_0x1607c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001607c4_0x1607c4");
#endif

    ctx->pc = 0x1607c4u;

    // 0x1607c4: 0xc6010124  lwc1        $f1, 0x124($s0)
    ctx->pc = 0x1607c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1607c8: 0xc7a00098  lwc1        $f0, 0x98($sp)
    ctx->pc = 0x1607c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1607cc: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1607ccu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1607d0: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x1607d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x1607d4: 0xc7a1009c  lwc1        $f1, 0x9C($sp)
    ctx->pc = 0x1607d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1607d8: 0x3c02443b  lui         $v0, 0x443B
    ctx->pc = 0x1607d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17467 << 16));
    // 0x1607dc: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x1607dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x1607e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1607e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1607e4: 0x0  nop
    ctx->pc = 0x1607e4u;
    // NOP
    // 0x1607e8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1607e8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1607ec: 0x0  nop
    ctx->pc = 0x1607ecu;
    // NOP
    // 0x1607f0: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1607F0u;
    {
        const bool branch_taken_0x1607f0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1607f0) {
            ctx->pc = 0x160804u;
            return;
        }
    }
    ctx->pc = 0x1607F8u;
    // 0x1607f8: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x1607f8u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1607fc: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x1607FCu;
    {
        const bool branch_taken_0x1607fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1607fc) {
            ctx->pc = 0x1608B0u;
            return;
        }
    }
    ctx->pc = 0x160804u;
}
