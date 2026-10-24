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

// Function: e2d_id0e_type0e
// Address: 0x2affb0 - 0x2b00ac
void e2d_id0e_type0e_0x2affb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id0e_type0e_0x2affb0");
#endif

    ctx->pc = 0x2affb0u;

    // 0x2affb0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2affb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2affb4: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x2affb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x2affb8: 0x3c034334  lui         $v1, 0x4334
    ctx->pc = 0x2affb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17204 << 16));
    // 0x2affbc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2affbcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2affc0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2affc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2affc4: 0xe4600090  swc1        $f0, 0x90($v1)
    ctx->pc = 0x2affc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 144), bits); }
    // 0x2affc8: 0x3c034372  lui         $v1, 0x4372
    ctx->pc = 0x2affc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17266 << 16));
    // 0x2affcc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2affccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2affd0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2affd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2affd4: 0xe4600094  swc1        $f0, 0x94($v1)
    ctx->pc = 0x2affd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 148), bits); }
    // 0x2affd8: 0x3c034343  lui         $v1, 0x4343
    ctx->pc = 0x2affd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17219 << 16));
    // 0x2affdc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2affdcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2affe0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2affe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2affe4: 0xe4600098  swc1        $f0, 0x98($v1)
    ctx->pc = 0x2affe4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 152), bits); }
    // 0x2affe8: 0x3c03435c  lui         $v1, 0x435C
    ctx->pc = 0x2affe8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17244 << 16));
    // 0x2affec: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2affecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2afff0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2afff0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2afff4: 0xe460009c  swc1        $f0, 0x9C($v1)
    ctx->pc = 0x2afff4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 156), bits); }
    // 0x2afff8: 0x3c033f7a  lui         $v1, 0x3F7A
    ctx->pc = 0x2afff8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16250 << 16));
    // 0x2afffc: 0x3463e148  ori         $v1, $v1, 0xE148
    ctx->pc = 0x2afffcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)57672);
    // 0x2b0000: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b0000u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b0004: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b0004u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b0008: 0xe46000ac  swc1        $f0, 0xAC($v1)
    ctx->pc = 0x2b0008u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 172), bits); }
    // 0x2b000c: 0x3c034348  lui         $v1, 0x4348
    ctx->pc = 0x2b000cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17224 << 16));
    // 0x2b0010: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b0010u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b0014: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b0014u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b0018: 0xe4600104  swc1        $f0, 0x104($v1)
    ctx->pc = 0x2b0018u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x2b001c: 0x3c033fb3  lui         $v1, 0x3FB3
    ctx->pc = 0x2b001cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16307 << 16));
    // 0x2b0020: 0x34633333  ori         $v1, $v1, 0x3333
    ctx->pc = 0x2b0020u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13107);
    // 0x2b0024: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b0024u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b0028: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b0028u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b002c: 0xe4600108  swc1        $f0, 0x108($v1)
    ctx->pc = 0x2b002cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 264), bits); }
    // 0x2b0030: 0x3c033fe6  lui         $v1, 0x3FE6
    ctx->pc = 0x2b0030u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16358 << 16));
    // 0x2b0034: 0x34636666  ori         $v1, $v1, 0x6666
    ctx->pc = 0x2b0034u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)26214);
    // 0x2b0038: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b0038u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b003c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b003cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b0040: 0xe460010c  swc1        $f0, 0x10C($v1)
    ctx->pc = 0x2b0040u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 268), bits); }
    // 0x2b0044: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2b0044u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b0048: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b0048u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b004c: 0xe4600054  swc1        $f0, 0x54($v1)
    ctx->pc = 0x2b004cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 84), bits); }
    // 0x2b0050: 0x3c034100  lui         $v1, 0x4100
    ctx->pc = 0x2b0050u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16640 << 16));
    // 0x2b0054: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b0054u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b0058: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b0058u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b005c: 0xe4600060  swc1        $f0, 0x60($v1)
    ctx->pc = 0x2b005cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 96), bits); }
    // 0x2b0060: 0x3c034100  lui         $v1, 0x4100
    ctx->pc = 0x2b0060u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16640 << 16));
    // 0x2b0064: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b0064u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b0068: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b0068u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b006c: 0xe4600064  swc1        $f0, 0x64($v1)
    ctx->pc = 0x2b006cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 100), bits); }
    // 0x2b0070: 0x3c034100  lui         $v1, 0x4100
    ctx->pc = 0x2b0070u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16640 << 16));
    // 0x2b0074: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b0074u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b0078: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b0078u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b007c: 0xe4600068  swc1        $f0, 0x68($v1)
    ctx->pc = 0x2b007cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 104), bits); }
    // 0x2b0080: 0x3c03bd23  lui         $v1, 0xBD23
    ctx->pc = 0x2b0080u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48419 << 16));
    // 0x2b0084: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x2b0084u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x2b0088: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b0088u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b008c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b008cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b0090: 0xe46000f4  swc1        $f0, 0xF4($v1)
    ctx->pc = 0x2b0090u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 244), bits); }
    // 0x2b0094: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2b0094u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2b0098: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b0098u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b009c: 0xa064013a  sb          $a0, 0x13A($v1)
    ctx->pc = 0x2b009cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 314), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b00a0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2b00a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2b00a4: 0x3e00008  jr          $ra
    ctx->pc = 0x2B00A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B00A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B00ACu;
}
