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

// Function: srp_id16_type01
// Address: 0x2c0f80 - 0x2c10dc
void srp_id16_type01_0x2c0f80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("srp_id16_type01_0x2c0f80");
#endif

    ctx->pc = 0x2c0f80u;

    // 0x2c0f80: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2c0f80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2c0f84: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x2c0f84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x2c0f88: 0x3c03437f  lui         $v1, 0x437F
    ctx->pc = 0x2c0f88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17279 << 16));
    // 0x2c0f8c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2c0f8cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c0f90: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2c0f90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c0f94: 0xe46002d0  swc1        $f0, 0x2D0($v1)
    ctx->pc = 0x2c0f94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 720), bits); }
    // 0x2c0f98: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2c0f98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2c0f9c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2c0f9cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c0fa0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2c0fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c0fa4: 0xe46002d4  swc1        $f0, 0x2D4($v1)
    ctx->pc = 0x2c0fa4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 724), bits); }
    // 0x2c0fa8: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2c0fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2c0fac: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2c0facu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c0fb0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2c0fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c0fb4: 0xe46002d8  swc1        $f0, 0x2D8($v1)
    ctx->pc = 0x2c0fb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 728), bits); }
    // 0x2c0fb8: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2c0fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2c0fbc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2c0fbcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c0fc0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2c0fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c0fc4: 0xe46002dc  swc1        $f0, 0x2DC($v1)
    ctx->pc = 0x2c0fc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 732), bits); }
    // 0x2c0fc8: 0x3c033f7d  lui         $v1, 0x3F7D
    ctx->pc = 0x2c0fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16253 << 16));
    // 0x2c0fcc: 0x346370a4  ori         $v1, $v1, 0x70A4
    ctx->pc = 0x2c0fccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)28836);
    // 0x2c0fd0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2c0fd0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c0fd4: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2c0fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c0fd8: 0xe46002e0  swc1        $f0, 0x2E0($v1)
    ctx->pc = 0x2c0fd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 736), bits); }
    // 0x2c0fdc: 0x3c033f7d  lui         $v1, 0x3F7D
    ctx->pc = 0x2c0fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16253 << 16));
    // 0x2c0fe0: 0x346370a4  ori         $v1, $v1, 0x70A4
    ctx->pc = 0x2c0fe0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)28836);
    // 0x2c0fe4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2c0fe4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c0fe8: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2c0fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c0fec: 0xe46002e4  swc1        $f0, 0x2E4($v1)
    ctx->pc = 0x2c0fecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 740), bits); }
    // 0x2c0ff0: 0x3c033f7d  lui         $v1, 0x3F7D
    ctx->pc = 0x2c0ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16253 << 16));
    // 0x2c0ff4: 0x346370a4  ori         $v1, $v1, 0x70A4
    ctx->pc = 0x2c0ff4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)28836);
    // 0x2c0ff8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2c0ff8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c0ffc: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2c0ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c1000: 0xe46002e8  swc1        $f0, 0x2E8($v1)
    ctx->pc = 0x2c1000u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 744), bits); }
    // 0x2c1004: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2c1004u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c1008: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2c1008u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c100c: 0xe46002f0  swc1        $f0, 0x2F0($v1)
    ctx->pc = 0x2c100cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 752), bits); }
    // 0x2c1010: 0x3c03c120  lui         $v1, 0xC120
    ctx->pc = 0x2c1010u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49440 << 16));
    // 0x2c1014: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2c1014u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c1018: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2c1018u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c101c: 0xe46002f4  swc1        $f0, 0x2F4($v1)
    ctx->pc = 0x2c101cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 756), bits); }
    // 0x2c1020: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2c1020u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c1024: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2c1024u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c1028: 0xe46002f8  swc1        $f0, 0x2F8($v1)
    ctx->pc = 0x2c1028u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 760), bits); }
    // 0x2c102c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2c102cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2c1030: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2c1030u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c1034: 0xa0640342  sb          $a0, 0x342($v1)
    ctx->pc = 0x2c1034u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 834), (uint8_t)GPR_U32(ctx, 4));
    // 0x2c1038: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x2c1038u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2c103c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2c103cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c1040: 0xa0640347  sb          $a0, 0x347($v1)
    ctx->pc = 0x2c1040u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 839), (uint8_t)GPR_U32(ctx, 4));
    // 0x2c1044: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x2c1044u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2c1048: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2c1048u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c104c: 0xa0640344  sb          $a0, 0x344($v1)
    ctx->pc = 0x2c104cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 836), (uint8_t)GPR_U32(ctx, 4));
    // 0x2c1050: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2c1050u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c1054: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2c1054u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c1058: 0xa064036d  sb          $a0, 0x36D($v1)
    ctx->pc = 0x2c1058u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 877), (uint8_t)GPR_U32(ctx, 4));
    // 0x2c105c: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x2c105cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2c1060: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2c1060u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c1064: 0xa064036a  sb          $a0, 0x36A($v1)
    ctx->pc = 0x2c1064u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 874), (uint8_t)GPR_U32(ctx, 4));
    // 0x2c1068: 0x3c033e99  lui         $v1, 0x3E99
    ctx->pc = 0x2c1068u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16025 << 16));
    // 0x2c106c: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x2c106cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
    // 0x2c1070: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2c1070u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c1074: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2c1074u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c1078: 0xe460027c  swc1        $f0, 0x27C($v1)
    ctx->pc = 0x2c1078u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 636), bits); }
    // 0x2c107c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2c107cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c1080: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2c1080u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c1084: 0xa064036b  sb          $a0, 0x36B($v1)
    ctx->pc = 0x2c1084u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 875), (uint8_t)GPR_U32(ctx, 4));
    // 0x2c1088: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x2c1088u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c108c: 0x8c830270  lw          $v1, 0x270($a0)
    ctx->pc = 0x2c108cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 624)));
    // 0x2c1090: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x2c1090u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x2c1094: 0xac830270  sw          $v1, 0x270($a0)
    ctx->pc = 0x2c1094u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 624), GPR_U32(ctx, 3));
    // 0x2c1098: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2c1098u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c109c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2c109cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c10a0: 0xac640280  sw          $a0, 0x280($v1)
    ctx->pc = 0x2c10a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 640), GPR_U32(ctx, 4));
    // 0x2c10a4: 0x24040032  addiu       $a0, $zero, 0x32
    ctx->pc = 0x2c10a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x2c10a8: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2c10a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c10ac: 0xac640334  sw          $a0, 0x334($v1)
    ctx->pc = 0x2c10acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 820), GPR_U32(ctx, 4));
    // 0x2c10b0: 0x3c034248  lui         $v1, 0x4248
    ctx->pc = 0x2c10b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16968 << 16));
    // 0x2c10b4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2c10b4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c10b8: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2c10b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c10bc: 0xe4600338  swc1        $f0, 0x338($v1)
    ctx->pc = 0x2c10bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 824), bits); }
    // 0x2c10c0: 0x3c034248  lui         $v1, 0x4248
    ctx->pc = 0x2c10c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16968 << 16));
    // 0x2c10c4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2c10c4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c10c8: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2c10c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c10cc: 0xe460033c  swc1        $f0, 0x33C($v1)
    ctx->pc = 0x2c10ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 828), bits); }
    // 0x2c10d0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2c10d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2c10d4: 0x3e00008  jr          $ra
    ctx->pc = 0x2C10D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C10D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C10DCu;
}
