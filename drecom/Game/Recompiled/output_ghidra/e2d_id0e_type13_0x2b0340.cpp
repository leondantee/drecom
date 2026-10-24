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

// Function: e2d_id0e_type13
// Address: 0x2b0340 - 0x2b0488
void e2d_id0e_type13_0x2b0340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id0e_type13_0x2b0340");
#endif

    ctx->pc = 0x2b0340u;

    // 0x2b0340: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2b0340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2b0344: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x2b0344u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x2b0348: 0x3c0340a0  lui         $v1, 0x40A0
    ctx->pc = 0x2b0348u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16544 << 16));
    // 0x2b034c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b034cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b0350: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b0350u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b0354: 0xe4600090  swc1        $f0, 0x90($v1)
    ctx->pc = 0x2b0354u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 144), bits); }
    // 0x2b0358: 0x3c034204  lui         $v1, 0x4204
    ctx->pc = 0x2b0358u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16900 << 16));
    // 0x2b035c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b035cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b0360: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b0360u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b0364: 0xe4600094  swc1        $f0, 0x94($v1)
    ctx->pc = 0x2b0364u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 148), bits); }
    // 0x2b0368: 0x3c034140  lui         $v1, 0x4140
    ctx->pc = 0x2b0368u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16704 << 16));
    // 0x2b036c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b036cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b0370: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b0370u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b0374: 0xe4600098  swc1        $f0, 0x98($v1)
    ctx->pc = 0x2b0374u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 152), bits); }
    // 0x2b0378: 0x3c0342a0  lui         $v1, 0x42A0
    ctx->pc = 0x2b0378u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17056 << 16));
    // 0x2b037c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b037cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b0380: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b0380u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b0384: 0xe460009c  swc1        $f0, 0x9C($v1)
    ctx->pc = 0x2b0384u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 156), bits); }
    // 0x2b0388: 0x3c033f73  lui         $v1, 0x3F73
    ctx->pc = 0x2b0388u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16243 << 16));
    // 0x2b038c: 0x34633333  ori         $v1, $v1, 0x3333
    ctx->pc = 0x2b038cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13107);
    // 0x2b0390: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b0390u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b0394: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b0394u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b0398: 0xe46000a0  swc1        $f0, 0xA0($v1)
    ctx->pc = 0x2b0398u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 160), bits); }
    // 0x2b039c: 0x3c033f73  lui         $v1, 0x3F73
    ctx->pc = 0x2b039cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16243 << 16));
    // 0x2b03a0: 0x34633333  ori         $v1, $v1, 0x3333
    ctx->pc = 0x2b03a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13107);
    // 0x2b03a4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b03a4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b03a8: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b03a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b03ac: 0xe46000a4  swc1        $f0, 0xA4($v1)
    ctx->pc = 0x2b03acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 164), bits); }
    // 0x2b03b0: 0x3c033f73  lui         $v1, 0x3F73
    ctx->pc = 0x2b03b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16243 << 16));
    // 0x2b03b4: 0x34633333  ori         $v1, $v1, 0x3333
    ctx->pc = 0x2b03b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13107);
    // 0x2b03b8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b03b8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b03bc: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b03bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b03c0: 0xe46000a8  swc1        $f0, 0xA8($v1)
    ctx->pc = 0x2b03c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 168), bits); }
    // 0x2b03c4: 0x3c033f73  lui         $v1, 0x3F73
    ctx->pc = 0x2b03c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16243 << 16));
    // 0x2b03c8: 0x34633333  ori         $v1, $v1, 0x3333
    ctx->pc = 0x2b03c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13107);
    // 0x2b03cc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b03ccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b03d0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b03d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b03d4: 0xe46000ac  swc1        $f0, 0xAC($v1)
    ctx->pc = 0x2b03d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 172), bits); }
    // 0x2b03d8: 0x3c03430c  lui         $v1, 0x430C
    ctx->pc = 0x2b03d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17164 << 16));
    // 0x2b03dc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b03dcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b03e0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b03e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b03e4: 0xe4600104  swc1        $f0, 0x104($v1)
    ctx->pc = 0x2b03e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x2b03e8: 0x3c033fb3  lui         $v1, 0x3FB3
    ctx->pc = 0x2b03e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16307 << 16));
    // 0x2b03ec: 0x34633333  ori         $v1, $v1, 0x3333
    ctx->pc = 0x2b03ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13107);
    // 0x2b03f0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b03f0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b03f4: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b03f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b03f8: 0xe4600108  swc1        $f0, 0x108($v1)
    ctx->pc = 0x2b03f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 264), bits); }
    // 0x2b03fc: 0x3c033fe6  lui         $v1, 0x3FE6
    ctx->pc = 0x2b03fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16358 << 16));
    // 0x2b0400: 0x34636666  ori         $v1, $v1, 0x6666
    ctx->pc = 0x2b0400u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)26214);
    // 0x2b0404: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b0404u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b0408: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b0408u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b040c: 0xe460010c  swc1        $f0, 0x10C($v1)
    ctx->pc = 0x2b040cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 268), bits); }
    // 0x2b0410: 0x3c034080  lui         $v1, 0x4080
    ctx->pc = 0x2b0410u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16512 << 16));
    // 0x2b0414: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b0414u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b0418: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b0418u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b041c: 0xe4600054  swc1        $f0, 0x54($v1)
    ctx->pc = 0x2b041cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 84), bits); }
    // 0x2b0420: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2b0420u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b0424: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b0424u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b0428: 0xe4600060  swc1        $f0, 0x60($v1)
    ctx->pc = 0x2b0428u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 96), bits); }
    // 0x2b042c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2b042cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b0430: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b0430u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b0434: 0xe4600064  swc1        $f0, 0x64($v1)
    ctx->pc = 0x2b0434u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 100), bits); }
    // 0x2b0438: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2b0438u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b043c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b043cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b0440: 0xe4600068  swc1        $f0, 0x68($v1)
    ctx->pc = 0x2b0440u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 104), bits); }
    // 0x2b0444: 0x3c033d38  lui         $v1, 0x3D38
    ctx->pc = 0x2b0444u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15672 << 16));
    // 0x2b0448: 0x346351ec  ori         $v1, $v1, 0x51EC
    ctx->pc = 0x2b0448u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)20972);
    // 0x2b044c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b044cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b0450: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b0450u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b0454: 0xe46000f4  swc1        $f0, 0xF4($v1)
    ctx->pc = 0x2b0454u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 244), bits); }
    // 0x2b0458: 0x24040019  addiu       $a0, $zero, 0x19
    ctx->pc = 0x2b0458u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x2b045c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b045cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b0460: 0xac640100  sw          $a0, 0x100($v1)
    ctx->pc = 0x2b0460u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 256), GPR_U32(ctx, 4));
    // 0x2b0464: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2b0464u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b0468: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b0468u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b046c: 0xa064013a  sb          $a0, 0x13A($v1)
    ctx->pc = 0x2b046cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 314), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b0470: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2b0470u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b0474: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b0474u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b0478: 0xa064011d  sb          $a0, 0x11D($v1)
    ctx->pc = 0x2b0478u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 285), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b047c: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2b047cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2b0480: 0x3e00008  jr          $ra
    ctx->pc = 0x2B0480u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B0480u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B0488u;
}
