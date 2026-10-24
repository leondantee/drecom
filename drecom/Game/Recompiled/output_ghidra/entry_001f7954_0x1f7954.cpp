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

// Function: entry_001f7954
// Address: 0x1f7954 - 0x1f79ac
void entry_001f7954_0x1f7954(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f7954_0x1f7954");
#endif

    ctx->pc = 0x1f7954u;

    // 0x1f7954: 0x8fb100c8  lw          $s1, 0xC8($sp)
    ctx->pc = 0x1f7954u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1f7958: 0xc6210184  lwc1        $f1, 0x184($s1)
    ctx->pc = 0x1f7958u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f795c: 0x3c124000  lui         $s2, 0x4000
    ctx->pc = 0x1f795cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)16384 << 16));
    // 0x1f7960: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x1f7960u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f7964: 0x0  nop
    ctx->pc = 0x1f7964u;
    // NOP
    // 0x1f7968: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1f7968u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1f796c: 0xe6200184  swc1        $f0, 0x184($s1)
    ctx->pc = 0x1f796cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 388), bits); }
    // 0x1f7970: 0x8fa800c8  lw          $t0, 0xC8($sp)
    ctx->pc = 0x1f7970u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1f7974: 0xc5010184  lwc1        $f1, 0x184($t0)
    ctx->pc = 0x1f7974u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f7978: 0x3c03c248  lui         $v1, 0xC248
    ctx->pc = 0x1f7978u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49736 << 16));
    // 0x1f797c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1f797cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f7980: 0x0  nop
    ctx->pc = 0x1f7980u;
    // NOP
    // 0x1f7984: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1f7984u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f7988: 0x0  nop
    ctx->pc = 0x1f7988u;
    // NOP
    // 0x1f798c: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x1F798Cu;
    {
        const bool branch_taken_0x1f798c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f798c) {
            ctx->pc = 0x1F79ACu;
            return;
        }
    }
    ctx->pc = 0x1F7994u;
    // 0x1f7994: 0x3c04c248  lui         $a0, 0xC248
    ctx->pc = 0x1f7994u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49736 << 16));
    // 0x1f7998: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1f7998u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f799c: 0x8fa500c8  lw          $a1, 0xC8($sp)
    ctx->pc = 0x1f799cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1f79a0: 0xe4a00184  swc1        $f0, 0x184($a1)
    ctx->pc = 0x1f79a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 388), bits); }
    // 0x1f79a4: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x1f79a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1f79a8: 0xa460127a  sh          $zero, 0x127A($v1)
    ctx->pc = 0x1f79a8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4730), (uint16_t)GPR_U32(ctx, 0));
    ctx->pc = 0x1f79acu;
}
