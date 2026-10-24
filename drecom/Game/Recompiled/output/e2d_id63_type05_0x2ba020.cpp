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

// Function: e2d_id63_type05
// Address: 0x2ba020 - 0x2ba0e4
void e2d_id63_type05_0x2ba020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id63_type05_0x2ba020");
#endif

    ctx->pc = 0x2ba020u;

    // 0x2ba020: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2ba020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2ba024: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x2ba024u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x2ba028: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2ba028u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ba02c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2ba02cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ba030: 0xa064013f  sb          $a0, 0x13F($v1)
    ctx->pc = 0x2ba030u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 319), (uint8_t)GPR_U32(ctx, 4));
    // 0x2ba034: 0x3c034396  lui         $v1, 0x4396
    ctx->pc = 0x2ba034u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17302 << 16));
    // 0x2ba038: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ba038u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ba03c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2ba03cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ba040: 0xe4600104  swc1        $f0, 0x104($v1)
    ctx->pc = 0x2ba040u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x2ba044: 0x3c034180  lui         $v1, 0x4180
    ctx->pc = 0x2ba044u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16768 << 16));
    // 0x2ba048: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ba048u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ba04c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2ba04cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ba050: 0xe4600090  swc1        $f0, 0x90($v1)
    ctx->pc = 0x2ba050u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 144), bits); }
    // 0x2ba054: 0x3c034180  lui         $v1, 0x4180
    ctx->pc = 0x2ba054u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16768 << 16));
    // 0x2ba058: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ba058u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ba05c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2ba05cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ba060: 0xe4600094  swc1        $f0, 0x94($v1)
    ctx->pc = 0x2ba060u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 148), bits); }
    // 0x2ba064: 0x3c034180  lui         $v1, 0x4180
    ctx->pc = 0x2ba064u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16768 << 16));
    // 0x2ba068: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ba068u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ba06c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2ba06cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ba070: 0xe4600098  swc1        $f0, 0x98($v1)
    ctx->pc = 0x2ba070u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 152), bits); }
    // 0x2ba074: 0x3c034180  lui         $v1, 0x4180
    ctx->pc = 0x2ba074u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16768 << 16));
    // 0x2ba078: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ba078u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ba07c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2ba07cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ba080: 0xe460009c  swc1        $f0, 0x9C($v1)
    ctx->pc = 0x2ba080u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 156), bits); }
    // 0x2ba084: 0x3c0342c0  lui         $v1, 0x42C0
    ctx->pc = 0x2ba084u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17088 << 16));
    // 0x2ba088: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ba088u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ba08c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2ba08cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ba090: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x2ba090u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x2ba094: 0x3c0342c0  lui         $v1, 0x42C0
    ctx->pc = 0x2ba094u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17088 << 16));
    // 0x2ba098: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ba098u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ba09c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2ba09cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ba0a0: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x2ba0a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x2ba0a4: 0x3c0342a0  lui         $v1, 0x42A0
    ctx->pc = 0x2ba0a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17056 << 16));
    // 0x2ba0a8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ba0a8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ba0ac: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2ba0acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ba0b0: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x2ba0b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x2ba0b4: 0x3c0342c0  lui         $v1, 0x42C0
    ctx->pc = 0x2ba0b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17088 << 16));
    // 0x2ba0b8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ba0b8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ba0bc: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2ba0bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ba0c0: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x2ba0c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x2ba0c4: 0x3c033e4c  lui         $v1, 0x3E4C
    ctx->pc = 0x2ba0c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15948 << 16));
    // 0x2ba0c8: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x2ba0c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x2ba0cc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ba0ccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ba0d0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2ba0d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ba0d4: 0xe4600010  swc1        $f0, 0x10($v1)
    ctx->pc = 0x2ba0d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
    // 0x2ba0d8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2ba0d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2ba0dc: 0x3e00008  jr          $ra
    ctx->pc = 0x2BA0DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BA0DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BA0E4u;
}
