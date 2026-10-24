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

// Function: entry_0031c080
// Address: 0x31c080 - 0x31c0d8
void entry_0031c080_0x31c080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0031c080_0x31c080");
#endif

    ctx->pc = 0x31c080u;

    // 0x31c080: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x31c080u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x31c084: 0x8c23dcf0  lw          $v1, -0x2310($at)
    ctx->pc = 0x31c084u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3EDCF0u));
    // 0x31c088: 0xc4610034  lwc1        $f1, 0x34($v1)
    ctx->pc = 0x31c088u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31c08c: 0x3c0343fa  lui         $v1, 0x43FA
    ctx->pc = 0x31c08cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17402 << 16));
    // 0x31c090: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x31c090u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31c094: 0x0  nop
    ctx->pc = 0x31c094u;
    // NOP
    // 0x31c098: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x31c098u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x31c09c: 0x8fa700c8  lw          $a3, 0xC8($sp)
    ctx->pc = 0x31c09cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31c0a0: 0xe4e00124  swc1        $f0, 0x124($a3)
    ctx->pc = 0x31c0a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 292), bits); }
    // 0x31c0a4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x31c0a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x31c0a8: 0x8fa600c8  lw          $a2, 0xC8($sp)
    ctx->pc = 0x31c0a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31c0ac: 0xa0c40000  sb          $a0, 0x0($a2)
    ctx->pc = 0x31c0acu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x31c0b0: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x31c0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31c0b4: 0xa0400001  sb          $zero, 0x1($v0)
    ctx->pc = 0x31c0b4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x31c0b8: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x31c0b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31c0bc: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x31c0bcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x31c0c0: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x31c0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31c0c4: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x31c0c4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x31c0c8: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x31c0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31c0cc: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x31c0ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x31c0d0: 0x100001eb  b           . + 4 + (0x1EB << 2)
    ctx->pc = 0x31C0D0u;
    {
        const bool branch_taken_0x31c0d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31c0d0) {
            ctx->pc = 0x31C880u;
            return;
        }
    }
    ctx->pc = 0x31C0D8u;
}
