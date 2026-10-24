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

// Function: Em0c_kama_init
// Address: 0x231190 - 0x231224
void Em0c_kama_init_0x231190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em0c_kama_init_0x231190");
#endif

    ctx->pc = 0x231190u;

    // 0x231190: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x231190u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x231194: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x231194u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x231198: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x231198u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x23119c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x23119cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2311a0: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x2311a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x2311a4: 0x24703520  addiu       $s0, $v1, 0x3520
    ctx->pc = 0x2311a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 13600));
    // 0x2311a8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2311a8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2311ac: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x2311acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2311b0: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x2311b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x2311b4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2311b4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2311b8: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x2311b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2311bc: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x2311bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x2311c0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2311c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2311c4: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x2311c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2311c8: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x2311c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x2311cc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2311ccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2311d0: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x2311d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2311d4: 0xe4600018  swc1        $f0, 0x18($v1)
    ctx->pc = 0x2311d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
    // 0x2311d8: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x2311d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2311dc: 0xa0600028  sb          $zero, 0x28($v1)
    ctx->pc = 0x2311dcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 40), (uint8_t)GPR_U32(ctx, 0));
    // 0x2311e0: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x2311e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2311e4: 0xa0600029  sb          $zero, 0x29($v1)
    ctx->pc = 0x2311e4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 41), (uint8_t)GPR_U32(ctx, 0));
    // 0x2311e8: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x2311e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2311ec: 0xa460002a  sh          $zero, 0x2A($v1)
    ctx->pc = 0x2311ecu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 42), (uint16_t)GPR_U32(ctx, 0));
    // 0x2311f0: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x2311f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2311f4: 0xa460002c  sh          $zero, 0x2C($v1)
    ctx->pc = 0x2311f4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 44), (uint16_t)GPR_U32(ctx, 0));
    // 0x2311f8: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x2311f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2311fc: 0xa460002e  sh          $zero, 0x2E($v1)
    ctx->pc = 0x2311fcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 46), (uint16_t)GPR_U32(ctx, 0));
    // 0x231200: 0x3c03c59c  lui         $v1, 0xC59C
    ctx->pc = 0x231200u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50588 << 16));
    // 0x231204: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x231204u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x231208: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x231208u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23120c: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x23120cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x231210: 0xe4600024  swc1        $f0, 0x24($v1)
    ctx->pc = 0x231210u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 36), bits); }
    // 0x231214: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x231214u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x231218: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x231218u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x23121c: 0x3e00008  jr          $ra
    ctx->pc = 0x23121Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23121Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x231224u;
}
