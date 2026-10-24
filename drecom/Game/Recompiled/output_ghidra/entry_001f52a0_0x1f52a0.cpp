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

// Function: entry_001f52a0
// Address: 0x1f52a0 - 0x1f5358
void entry_001f52a0_0x1f52a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f52a0_0x1f52a0");
#endif

    switch (ctx->pc) {
        case 0x1f52b0u: goto label_1f52b0;
        case 0x1f52bcu: goto label_1f52bc;
        case 0x1f52f4u: goto label_1f52f4;
        default: break;
    }

    ctx->pc = 0x1f52a0u;

    // 0x1f52a0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1f52a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f52a4: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1f52a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1f52a8: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1F52A8u;
    SET_GPR_U32(ctx, 31, 0x1F52B0u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1F52A8u, 0x1F52B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F52B0u;
label_1f52b0:
    // 0x1f52b0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1f52b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f52b4: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x1F52B4u;
    SET_GPR_U32(ctx, 31, 0x1F52BCu);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x1F52B4u, 0x1F52BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F52BCu;
label_1f52bc:
    // 0x1f52bc: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x1f52bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f52c0: 0x84a41278  lh          $a0, 0x1278($a1)
    ctx->pc = 0x1f52c0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4728)));
    // 0x1f52c4: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x1f52c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1f52c8: 0xa4a31278  sh          $v1, 0x1278($a1)
    ctx->pc = 0x1f52c8u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x1f52cc: 0x14800022  bnez        $a0, . + 4 + (0x22 << 2)
    ctx->pc = 0x1F52CCu;
    {
        const bool branch_taken_0x1f52cc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f52cc) {
            ctx->pc = 0x1F5358u;
            return;
        }
    }
    ctx->pc = 0x1F52D4u;
    // 0x1f52d4: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1f52d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f52d8: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x1f52d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f52dc: 0x8c830030  lw          $v1, 0x30($a0)
    ctx->pc = 0x1f52dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x1f52e0: 0x2402ffdf  addiu       $v0, $zero, -0x21
    ctx->pc = 0x1f52e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967263));
    // 0x1f52e4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1f52e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1f52e8: 0xac820030  sw          $v0, 0x30($a0)
    ctx->pc = 0x1f52e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 2));
    // 0x1f52ec: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1F52ECu;
    SET_GPR_U32(ctx, 31, 0x1F52F4u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1F52ECu, 0x1F52F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F52F4u;
label_1f52f4:
    // 0x1f52f4: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1f52f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1f52f8: 0x3063001f  andi        $v1, $v1, 0x1F
    ctx->pc = 0x1f52f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
    // 0x1f52fc: 0x246300b4  addiu       $v1, $v1, 0xB4
    ctx->pc = 0x1f52fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 180));
    // 0x1f5300: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x1f5300u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1f5304: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x1f5304u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x1f5308: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1f5308u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f530c: 0xa4641278  sh          $a0, 0x1278($v1)
    ctx->pc = 0x1f530cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 4));
    // 0x1f5310: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1f5310u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f5314: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1f5314u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f5318: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1f5318u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1f531c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1f531cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f5320: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1f5320u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f5324: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x1f5324u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x1f5328: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1f5328u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f532c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x1f532cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f5330: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1f5330u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f5334: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1f5334u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f5338: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1f5338u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f533c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1f533cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x1f5340: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f5340u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f5344: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1f5344u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f5348: 0xe4600188  swc1        $f0, 0x188($v1)
    ctx->pc = 0x1f5348u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 392), bits); }
    // 0x1f534c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f534cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f5350: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1f5350u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f5354: 0xe4600180  swc1        $f0, 0x180($v1)
    ctx->pc = 0x1f5354u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 384), bits); }
    ctx->pc = 0x1f5358u;
}
