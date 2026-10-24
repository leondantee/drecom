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

// Function: e2d_id0e_type0f
// Address: 0x2b00b0 - 0x2b01cc
void e2d_id0e_type0f_0x2b00b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id0e_type0f_0x2b00b0");
#endif

    ctx->pc = 0x2b00b0u;

    // 0x2b00b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2b00b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2b00b4: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x2b00b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x2b00b8: 0x3c034248  lui         $v1, 0x4248
    ctx->pc = 0x2b00b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16968 << 16));
    // 0x2b00bc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b00bcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b00c0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b00c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b00c4: 0xe4600090  swc1        $f0, 0x90($v1)
    ctx->pc = 0x2b00c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 144), bits); }
    // 0x2b00c8: 0x3c0342b4  lui         $v1, 0x42B4
    ctx->pc = 0x2b00c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17076 << 16));
    // 0x2b00cc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b00ccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b00d0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b00d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b00d4: 0xe4600094  swc1        $f0, 0x94($v1)
    ctx->pc = 0x2b00d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 148), bits); }
    // 0x2b00d8: 0x3c034284  lui         $v1, 0x4284
    ctx->pc = 0x2b00d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17028 << 16));
    // 0x2b00dc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b00dcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b00e0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b00e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b00e4: 0xe4600098  swc1        $f0, 0x98($v1)
    ctx->pc = 0x2b00e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 152), bits); }
    // 0x2b00e8: 0x3c034248  lui         $v1, 0x4248
    ctx->pc = 0x2b00e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16968 << 16));
    // 0x2b00ec: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b00ecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b00f0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b00f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b00f4: 0xe460009c  swc1        $f0, 0x9C($v1)
    ctx->pc = 0x2b00f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 156), bits); }
    // 0x2b00f8: 0x3c033f75  lui         $v1, 0x3F75
    ctx->pc = 0x2b00f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16245 << 16));
    // 0x2b00fc: 0x3463c28f  ori         $v1, $v1, 0xC28F
    ctx->pc = 0x2b00fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)49807);
    // 0x2b0100: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b0100u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b0104: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b0104u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b0108: 0xe46000a0  swc1        $f0, 0xA0($v1)
    ctx->pc = 0x2b0108u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 160), bits); }
    // 0x2b010c: 0x3c033f78  lui         $v1, 0x3F78
    ctx->pc = 0x2b010cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16248 << 16));
    // 0x2b0110: 0x346351ec  ori         $v1, $v1, 0x51EC
    ctx->pc = 0x2b0110u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)20972);
    // 0x2b0114: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b0114u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b0118: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b0118u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b011c: 0xe46000a4  swc1        $f0, 0xA4($v1)
    ctx->pc = 0x2b011cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 164), bits); }
    // 0x2b0120: 0x3c033f7a  lui         $v1, 0x3F7A
    ctx->pc = 0x2b0120u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16250 << 16));
    // 0x2b0124: 0x3463e148  ori         $v1, $v1, 0xE148
    ctx->pc = 0x2b0124u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)57672);
    // 0x2b0128: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b0128u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b012c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b012cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b0130: 0xe46000a8  swc1        $f0, 0xA8($v1)
    ctx->pc = 0x2b0130u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 168), bits); }
    // 0x2b0134: 0x3c034348  lui         $v1, 0x4348
    ctx->pc = 0x2b0134u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17224 << 16));
    // 0x2b0138: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b0138u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b013c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b013cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b0140: 0xe4600104  swc1        $f0, 0x104($v1)
    ctx->pc = 0x2b0140u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x2b0144: 0x3c033fb3  lui         $v1, 0x3FB3
    ctx->pc = 0x2b0144u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16307 << 16));
    // 0x2b0148: 0x34633333  ori         $v1, $v1, 0x3333
    ctx->pc = 0x2b0148u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13107);
    // 0x2b014c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b014cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b0150: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b0150u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b0154: 0xe4600108  swc1        $f0, 0x108($v1)
    ctx->pc = 0x2b0154u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 264), bits); }
    // 0x2b0158: 0x3c033fe6  lui         $v1, 0x3FE6
    ctx->pc = 0x2b0158u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16358 << 16));
    // 0x2b015c: 0x34636666  ori         $v1, $v1, 0x6666
    ctx->pc = 0x2b015cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)26214);
    // 0x2b0160: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b0160u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b0164: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b0164u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b0168: 0xe460010c  swc1        $f0, 0x10C($v1)
    ctx->pc = 0x2b0168u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 268), bits); }
    // 0x2b016c: 0x3c034080  lui         $v1, 0x4080
    ctx->pc = 0x2b016cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16512 << 16));
    // 0x2b0170: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b0170u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b0174: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b0174u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b0178: 0xe4600054  swc1        $f0, 0x54($v1)
    ctx->pc = 0x2b0178u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 84), bits); }
    // 0x2b017c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2b017cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b0180: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b0180u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b0184: 0xe4600060  swc1        $f0, 0x60($v1)
    ctx->pc = 0x2b0184u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 96), bits); }
    // 0x2b0188: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2b0188u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b018c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b018cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b0190: 0xe4600064  swc1        $f0, 0x64($v1)
    ctx->pc = 0x2b0190u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 100), bits); }
    // 0x2b0194: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2b0194u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b0198: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b0198u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b019c: 0xe4600068  swc1        $f0, 0x68($v1)
    ctx->pc = 0x2b019cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 104), bits); }
    // 0x2b01a0: 0x3c033a83  lui         $v1, 0x3A83
    ctx->pc = 0x2b01a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)14979 << 16));
    // 0x2b01a4: 0x3463126f  ori         $v1, $v1, 0x126F
    ctx->pc = 0x2b01a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4719);
    // 0x2b01a8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b01a8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b01ac: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b01acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b01b0: 0xe46000f4  swc1        $f0, 0xF4($v1)
    ctx->pc = 0x2b01b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 244), bits); }
    // 0x2b01b4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2b01b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b01b8: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b01b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b01bc: 0xa064013a  sb          $a0, 0x13A($v1)
    ctx->pc = 0x2b01bcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 314), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b01c0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2b01c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2b01c4: 0x3e00008  jr          $ra
    ctx->pc = 0x2B01C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B01C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B01CCu;
}
