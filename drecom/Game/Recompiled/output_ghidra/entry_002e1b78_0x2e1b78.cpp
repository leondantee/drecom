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

// Function: entry_002e1b78
// Address: 0x2e1b78 - 0x2e1c9c
void entry_002e1b78_0x2e1b78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e1b78_0x2e1b78");
#endif

    switch (ctx->pc) {
        case 0x2e1b88u: goto label_2e1b88;
        case 0x2e1b98u: goto label_2e1b98;
        case 0x2e1ba4u: goto label_2e1ba4;
        case 0x2e1be8u: goto label_2e1be8;
        case 0x2e1c20u: goto label_2e1c20;
        case 0x2e1c34u: goto label_2e1c34;
        case 0x2e1c48u: goto label_2e1c48;
        default: break;
    }

    ctx->pc = 0x2e1b78u;

    // 0x2e1b78: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x2e1b78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2e1b7c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2e1b7cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2e1b80: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x2E1B80u;
    SET_GPR_U32(ctx, 31, 0x2E1B88u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2E1B80u, 0x2E1B88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E1B88u;
label_2e1b88:
    // 0x2e1b88: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x2e1b88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2e1b8c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2e1b8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2e1b90: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x2E1B90u;
    SET_GPR_U32(ctx, 31, 0x2E1B98u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x2E1B90u, 0x2E1B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E1B98u;
label_2e1b98:
    // 0x2e1b98: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x2e1b98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2e1b9c: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x2E1B9Cu;
    SET_GPR_U32(ctx, 31, 0x2E1BA4u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x2E1B9Cu, 0x2E1BA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E1BA4u;
label_2e1ba4:
    // 0x2e1ba4: 0x8e3500b0  lw          $s5, 0xB0($s1)
    ctx->pc = 0x2e1ba4u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
    // 0x2e1ba8: 0x12a000c2  beqz        $s5, . + 4 + (0xC2 << 2)
    ctx->pc = 0x2E1BA8u;
    {
        const bool branch_taken_0x2e1ba8 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e1ba8) {
            ctx->pc = 0x2E1EB4u;
            return;
        }
    }
    ctx->pc = 0x2E1BB0u;
    // 0x2e1bb0: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x2e1bb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2e1bb4: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x2e1bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2e1bb8: 0x3c02afff  lui         $v0, 0xAFFF
    ctx->pc = 0x2e1bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45055 << 16));
    // 0x2e1bbc: 0x3442fffb  ori         $v0, $v0, 0xFFFB
    ctx->pc = 0x2e1bbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65531);
    // 0x2e1bc0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2e1bc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2e1bc4: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x2e1bc4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x2e1bc8: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2e1bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2e1bcc: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x2e1bccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2e1bd0: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x2e1bd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x2e1bd4: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x2e1bd4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x2e1bd8: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2e1bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2e1bdc: 0xa04010a8  sb          $zero, 0x10A8($v0)
    ctx->pc = 0x2e1bdcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e1be0: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2E1BE0u;
    SET_GPR_U32(ctx, 31, 0x2E1BE8u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2E1BE0u, 0x2E1BE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E1BE8u;
label_2e1be8:
    // 0x2e1be8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2e1be8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2e1bec: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x2e1becu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x2e1bf0: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x2e1bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2e1bf4: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2e1bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x2e1bf8: 0x244289c0  addiu       $v0, $v0, -0x7640
    ctx->pc = 0x2e1bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937024));
    // 0x2e1bfc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2e1bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e1c00: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x2e1c00u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e1c04: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2e1c04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2e1c08: 0xa44310a6  sh          $v1, 0x10A6($v0)
    ctx->pc = 0x2e1c08u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4262), (uint16_t)GPR_U32(ctx, 3));
    // 0x2e1c0c: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2e1c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2e1c10: 0x24440120  addiu       $a0, $v0, 0x120
    ctx->pc = 0x2e1c10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x2e1c14: 0x26a50120  addiu       $a1, $s5, 0x120
    ctx->pc = 0x2e1c14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 288));
    // 0x2e1c18: 0xc040c9e  jal         func_103278
    ctx->pc = 0x2E1C18u;
    SET_GPR_U32(ctx, 31, 0x2E1C20u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x2E1C20u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2E1C20u) { return; }
    ctx->pc = 0x2E1C20u;
label_2e1c20:
    // 0x2e1c20: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2e1c20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2e1c24: 0x24440170  addiu       $a0, $v0, 0x170
    ctx->pc = 0x2e1c24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 368));
    // 0x2e1c28: 0x26a50170  addiu       $a1, $s5, 0x170
    ctx->pc = 0x2e1c28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 368));
    // 0x2e1c2c: 0xc040c9e  jal         func_103278
    ctx->pc = 0x2E1C2Cu;
    SET_GPR_U32(ctx, 31, 0x2E1C34u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x2E1C34u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2E1C34u) { return; }
    ctx->pc = 0x2E1C34u;
label_2e1c34:
    // 0x2e1c34: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2e1c34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2e1c38: 0x244400d0  addiu       $a0, $v0, 0xD0
    ctx->pc = 0x2e1c38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 208));
    // 0x2e1c3c: 0x26a500d0  addiu       $a1, $s5, 0xD0
    ctx->pc = 0x2e1c3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 208));
    // 0x2e1c40: 0xc040c9e  jal         func_103278
    ctx->pc = 0x2E1C40u;
    SET_GPR_U32(ctx, 31, 0x2E1C48u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x2E1C48u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2E1C48u) { return; }
    ctx->pc = 0x2E1C48u;
label_2e1c48:
    // 0x2e1c48: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2e1c48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2e1c4c: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x2e1c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x2e1c50: 0x24703390  addiu       $s0, $v1, 0x3390
    ctx->pc = 0x2e1c50u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 13200));
    // 0x2e1c54: 0x96030140  lhu         $v1, 0x140($s0)
    ctx->pc = 0x2e1c54u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x2e1c58: 0x3063ffef  andi        $v1, $v1, 0xFFEF
    ctx->pc = 0x2e1c58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65519);
    // 0x2e1c5c: 0xa6030140  sh          $v1, 0x140($s0)
    ctx->pc = 0x2e1c5cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 3));
    // 0x2e1c60: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2e1c60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2e1c64: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2e1c64u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e1c68: 0x0  nop
    ctx->pc = 0x2e1c68u;
    // NOP
    // 0x2e1c6c: 0xe6000128  swc1        $f0, 0x128($s0)
    ctx->pc = 0x2e1c6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 296), bits); }
    // 0x2e1c70: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2e1c70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2e1c74: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2e1c74u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e1c78: 0x0  nop
    ctx->pc = 0x2e1c78u;
    // NOP
    // 0x2e1c7c: 0xe600012c  swc1        $f0, 0x12C($s0)
    ctx->pc = 0x2e1c7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 300), bits); }
    // 0x2e1c80: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2e1c80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2e1c84: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2e1c84u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e1c88: 0x0  nop
    ctx->pc = 0x2e1c88u;
    // NOP
    // 0x2e1c8c: 0xe6000130  swc1        $f0, 0x130($s0)
    ctx->pc = 0x2e1c8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 304), bits); }
    // 0x2e1c90: 0x70009e28  paddub      $s3, $zero, $zero
    ctx->pc = 0x2e1c90u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2e1c94: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2E1C94u;
    {
        const bool branch_taken_0x2e1c94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e1c94) {
            ctx->pc = 0x2E1CD8u;
            return;
        }
    }
    ctx->pc = 0x2E1C9Cu;
}
