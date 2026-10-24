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

// Function: LoadImageTim2
// Address: 0x178b80 - 0x178f48
void LoadImageTim2_0x178b80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("LoadImageTim2_0x178b80");
#endif

    switch (ctx->pc) {
        case 0x178c40u: goto label_178c40;
        case 0x178c54u: goto label_178c54;
        case 0x178c90u: goto label_178c90;
        default: break;
    }

    ctx->pc = 0x178b80u;

    // 0x178b80: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x178b80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x178b84: 0x7fbf0050  sq          $ra, 0x50($sp)
    ctx->pc = 0x178b84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 31));
    // 0x178b88: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x178b88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x178b8c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x178b8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x178b90: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x178b90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x178b94: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x178b94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x178b98: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x178b98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x178b9c: 0xa3a40060  sb          $a0, 0x60($sp)
    ctx->pc = 0x178b9cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 96), (uint8_t)GPR_U32(ctx, 4));
    // 0x178ba0: 0xafa50068  sw          $a1, 0x68($sp)
    ctx->pc = 0x178ba0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 5));
    // 0x178ba4: 0xafa60070  sw          $a2, 0x70($sp)
    ctx->pc = 0x178ba4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 6));
    // 0x178ba8: 0xafa70078  sw          $a3, 0x78($sp)
    ctx->pc = 0x178ba8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 7));
    // 0x178bac: 0x8fb40068  lw          $s4, 0x68($sp)
    ctx->pc = 0x178bacu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x178bb0: 0x92830005  lbu         $v1, 0x5($s4)
    ctx->pc = 0x178bb0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 5)));
    // 0x178bb4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x178bb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x178bb8: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x178BB8u;
    {
        const bool branch_taken_0x178bb8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x178bb8) {
            ctx->pc = 0x178BD0u;
            goto label_178bd0;
        }
    }
    ctx->pc = 0x178BC0u;
    // 0x178bc0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x178bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x178bc4: 0x24700010  addiu       $s0, $v1, 0x10
    ctx->pc = 0x178bc4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x178bc8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x178BC8u;
    {
        const bool branch_taken_0x178bc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x178bc8) {
            ctx->pc = 0x178BD8u;
            goto label_178bd8;
        }
    }
    ctx->pc = 0x178BD0u;
label_178bd0:
    // 0x178bd0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x178bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x178bd4: 0x24700080  addiu       $s0, $v1, 0x80
    ctx->pc = 0x178bd4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
label_178bd8:
    // 0x178bd8: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x178bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x178bdc: 0x2c611200  sltiu       $at, $v1, 0x1200
    ctx->pc = 0x178bdcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)4608) ? 1 : 0);
    // 0x178be0: 0x1020000f  beqz        $at, . + 4 + (0xF << 2)
    ctx->pc = 0x178BE0u;
    {
        const bool branch_taken_0x178be0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x178be0) {
            ctx->pc = 0x178C20u;
            goto label_178c20;
        }
    }
    ctx->pc = 0x178BE8u;
    // 0x178be8: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x178be8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x178bec: 0x2464ef00  addiu       $a0, $v1, -0x1100
    ctx->pc = 0x178becu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962944));
    // 0x178bf0: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x178bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x178bf4: 0x48942  srl         $s1, $a0, 5
    ctx->pc = 0x178bf4u;
    SET_GPR_S32(ctx, 17, (int32_t)SRL32(GPR_U32(ctx, 4), 5));
    // 0x178bf8: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x178bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x178bfc: 0x2464ef00  addiu       $a0, $v1, -0x1100
    ctx->pc = 0x178bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962944));
    // 0x178c00: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x178c00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x178c04: 0x3083001f  andi        $v1, $a0, 0x1F
    ctx->pc = 0x178c04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)31);
    // 0x178c08: 0x2464fffc  addiu       $a0, $v1, -0x4
    ctx->pc = 0x178c08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
    // 0x178c0c: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x178c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x178c10: 0x418c2  srl         $v1, $a0, 3
    ctx->pc = 0x178c10u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 3));
    // 0x178c14: 0x2238821  addu        $s1, $s1, $v1
    ctx->pc = 0x178c14u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x178c18: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x178C18u;
    {
        const bool branch_taken_0x178c18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x178c18) {
            ctx->pc = 0x178C34u;
            goto label_178c34;
        }
    }
    ctx->pc = 0x178C20u;
label_178c20:
    // 0x178c20: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x178c20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x178c24: 0x2464ee00  addiu       $a0, $v1, -0x1200
    ctx->pc = 0x178c24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962688));
    // 0x178c28: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x178c28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x178c2c: 0x41882  srl         $v1, $a0, 2
    ctx->pc = 0x178c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 2));
    // 0x178c30: 0x24710020  addiu       $s1, $v1, 0x20
    ctx->pc = 0x178c30u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
label_178c34:
    // 0x178c34: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x178c34u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x178c38: 0x100000b5  b           . + 4 + (0xB5 << 2)
    ctx->pc = 0x178C38u;
    {
        const bool branch_taken_0x178c38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x178c38) {
            ctx->pc = 0x178F10u;
            goto label_178f10;
        }
    }
    ctx->pc = 0x178C40u;
label_178c40:
    // 0x178c40: 0x8fb30070  lw          $s3, 0x70($sp)
    ctx->pc = 0x178c40u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x178c44: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x178c44u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x178c48: 0x8fa50070  lw          $a1, 0x70($sp)
    ctx->pc = 0x178c48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x178c4c: 0xc05e3d4  jal         func_178F50
    ctx->pc = 0x178C4Cu;
    SET_GPR_U32(ctx, 31, 0x178C54u);
    ctx->pc = 0x178F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178F50u, 0x178C4Cu, 0x178C54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178C54u;
label_178c54:
    // 0x178c54: 0xafa20070  sw          $v0, 0x70($sp)
    ctx->pc = 0x178c54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 2));
    // 0x178c58: 0x322400ff  andi        $a0, $s1, 0xFF
    ctx->pc = 0x178c58u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x178c5c: 0x93a20060  lbu         $v0, 0x60($sp)
    ctx->pc = 0x178c5cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x178c60: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x178c60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x178c64: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x178c64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x178c68: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x178c68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x178c6c: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x178c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x178c70: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x178c70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x178c74: 0x2442cca0  addiu       $v0, $v0, -0x3360
    ctx->pc = 0x178c74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954144));
    // 0x178c78: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x178c78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x178c7c: 0xa0440003  sb          $a0, 0x3($v0)
    ctx->pc = 0x178c7cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 4));
    // 0x178c80: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x178c80u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x178c84: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x178c84u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x178c88: 0xc05e4ac  jal         func_1792B0
    ctx->pc = 0x178C88u;
    SET_GPR_U32(ctx, 31, 0x178C90u);
    ctx->pc = 0x1792B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1792B0u, 0x178C88u, 0x178C90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178C90u;
label_178c90:
    // 0x178c90: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x178c90u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x178c94: 0x93a30060  lbu         $v1, 0x60($sp)
    ctx->pc = 0x178c94u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x178c98: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x178c98u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x178c9c: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x178c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x178ca0: 0x10830097  beq         $a0, $v1, . + 4 + (0x97 << 2)
    ctx->pc = 0x178CA0u;
    {
        const bool branch_taken_0x178ca0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x178ca0) {
            ctx->pc = 0x178F00u;
            goto label_178f00;
        }
    }
    ctx->pc = 0x178CA8u;
    // 0x178ca8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x178ca8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x178cac: 0x93a30060  lbu         $v1, 0x60($sp)
    ctx->pc = 0x178cacu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x178cb0: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x178cb0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x178cb4: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x178cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x178cb8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x178cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x178cbc: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x178cbcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x178cc0: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x178cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x178cc4: 0x2463cca0  addiu       $v1, $v1, -0x3360
    ctx->pc = 0x178cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954144));
    // 0x178cc8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x178cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x178ccc: 0xa0650000  sb          $a1, 0x0($v1)
    ctx->pc = 0x178cccu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x178cd0: 0x93a30060  lbu         $v1, 0x60($sp)
    ctx->pc = 0x178cd0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x178cd4: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x178cd4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x178cd8: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x178cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x178cdc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x178cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x178ce0: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x178ce0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x178ce4: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x178ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x178ce8: 0x2463cca0  addiu       $v1, $v1, -0x3360
    ctx->pc = 0x178ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954144));
    // 0x178cec: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x178cecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x178cf0: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x178cf0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x178cf4: 0x93a30060  lbu         $v1, 0x60($sp)
    ctx->pc = 0x178cf4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x178cf8: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x178cf8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x178cfc: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x178cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x178d00: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x178d00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x178d04: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x178d04u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x178d08: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x178d08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x178d0c: 0x2463cca0  addiu       $v1, $v1, -0x3360
    ctx->pc = 0x178d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954144));
    // 0x178d10: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x178d10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x178d14: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x178d14u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x178d18: 0x9603000e  lhu         $v1, 0xE($s0)
    ctx->pc = 0x178d18u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x178d1c: 0x1060002c  beqz        $v1, . + 4 + (0x2C << 2)
    ctx->pc = 0x178D1Cu;
    {
        const bool branch_taken_0x178d1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x178d1c) {
            ctx->pc = 0x178DD0u;
            goto label_178dd0;
        }
    }
    ctx->pc = 0x178D24u;
    // 0x178d24: 0x92030013  lbu         $v1, 0x13($s0)
    ctx->pc = 0x178d24u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 19)));
    // 0x178d28: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x178d28u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x178d2c: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x178d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x178d30: 0x10830017  beq         $a0, $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x178D30u;
    {
        const bool branch_taken_0x178d30 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x178d30) {
            ctx->pc = 0x178D90u;
            goto label_178d90;
        }
    }
    ctx->pc = 0x178D38u;
    // 0x178d38: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x178d38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x178d3c: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x178D3Cu;
    {
        const bool branch_taken_0x178d3c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x178d3c) {
            ctx->pc = 0x178D4Cu;
            goto label_178d4c;
        }
    }
    ctx->pc = 0x178D44u;
    // 0x178d44: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x178D44u;
    {
        const bool branch_taken_0x178d44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x178d44) {
            ctx->pc = 0x178DD0u;
            goto label_178dd0;
        }
    }
    ctx->pc = 0x178D4Cu;
label_178d4c:
    // 0x178d4c: 0x9603000e  lhu         $v1, 0xE($s0)
    ctx->pc = 0x178d4cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x178d50: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x178d50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x178d54: 0x2464000f  addiu       $a0, $v1, 0xF
    ctx->pc = 0x178d54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x178d58: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x178d58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x178d5c: 0x41903  sra         $v1, $a0, 4
    ctx->pc = 0x178d5cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 4));
    // 0x178d60: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x178d60u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x178d64: 0x93a30060  lbu         $v1, 0x60($sp)
    ctx->pc = 0x178d64u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x178d68: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x178d68u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x178d6c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x178d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x178d70: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x178d70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x178d74: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x178d74u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x178d78: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x178d78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x178d7c: 0x2463cca0  addiu       $v1, $v1, -0x3360
    ctx->pc = 0x178d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954144));
    // 0x178d80: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x178d80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x178d84: 0xa0650002  sb          $a1, 0x2($v1)
    ctx->pc = 0x178d84u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 5));
    // 0x178d88: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x178D88u;
    {
        const bool branch_taken_0x178d88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x178d88) {
            ctx->pc = 0x178DD0u;
            goto label_178dd0;
        }
    }
    ctx->pc = 0x178D90u;
label_178d90:
    // 0x178d90: 0x9603000e  lhu         $v1, 0xE($s0)
    ctx->pc = 0x178d90u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x178d94: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x178d94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x178d98: 0x246400ff  addiu       $a0, $v1, 0xFF
    ctx->pc = 0x178d98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 255));
    // 0x178d9c: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x178d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x178da0: 0x41a03  sra         $v1, $a0, 8
    ctx->pc = 0x178da0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 8));
    // 0x178da4: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x178da4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x178da8: 0x93a30060  lbu         $v1, 0x60($sp)
    ctx->pc = 0x178da8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x178dac: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x178dacu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x178db0: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x178db0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x178db4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x178db4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x178db8: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x178db8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x178dbc: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x178dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x178dc0: 0x2463cca0  addiu       $v1, $v1, -0x3360
    ctx->pc = 0x178dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954144));
    // 0x178dc4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x178dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x178dc8: 0xa0650002  sb          $a1, 0x2($v1)
    ctx->pc = 0x178dc8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 5));
    // 0x178dcc: 0x0  nop
    ctx->pc = 0x178dccu;
    // NOP
label_178dd0:
    // 0x178dd0: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x178dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x178dd4: 0x731823  subu        $v1, $v1, $s3
    ctx->pc = 0x178dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x178dd8: 0x3065ffff  andi        $a1, $v1, 0xFFFF
    ctx->pc = 0x178dd8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x178ddc: 0x93a30060  lbu         $v1, 0x60($sp)
    ctx->pc = 0x178ddcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x178de0: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x178de0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x178de4: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x178de4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x178de8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x178de8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x178dec: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x178decu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x178df0: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x178df0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x178df4: 0x2463cca0  addiu       $v1, $v1, -0x3360
    ctx->pc = 0x178df4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954144));
    // 0x178df8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x178df8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x178dfc: 0xa4650012  sh          $a1, 0x12($v1)
    ctx->pc = 0x178dfcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 18), (uint16_t)GPR_U32(ctx, 5));
    // 0x178e00: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x178e00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x178e04: 0x93a30060  lbu         $v1, 0x60($sp)
    ctx->pc = 0x178e04u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x178e08: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x178e08u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x178e0c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x178e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x178e10: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x178e10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x178e14: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x178e14u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x178e18: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x178e18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x178e1c: 0x2463cca0  addiu       $v1, $v1, -0x3360
    ctx->pc = 0x178e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954144));
    // 0x178e20: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x178e20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x178e24: 0xa4650010  sh          $a1, 0x10($v1)
    ctx->pc = 0x178e24u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 16), (uint16_t)GPR_U32(ctx, 5));
    // 0x178e28: 0x93a30060  lbu         $v1, 0x60($sp)
    ctx->pc = 0x178e28u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x178e2c: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x178e2cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x178e30: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x178e30u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x178e34: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x178e34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x178e38: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x178e38u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x178e3c: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x178e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x178e40: 0x2463cca0  addiu       $v1, $v1, -0x3360
    ctx->pc = 0x178e40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954144));
    // 0x178e44: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x178e44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x178e48: 0xac700008  sw          $s0, 0x8($v1)
    ctx->pc = 0x178e48u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 16));
    // 0x178e4c: 0x96050014  lhu         $a1, 0x14($s0)
    ctx->pc = 0x178e4cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x178e50: 0x93a30060  lbu         $v1, 0x60($sp)
    ctx->pc = 0x178e50u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x178e54: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x178e54u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x178e58: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x178e58u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x178e5c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x178e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x178e60: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x178e60u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x178e64: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x178e64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x178e68: 0x2463cca0  addiu       $v1, $v1, -0x3360
    ctx->pc = 0x178e68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954144));
    // 0x178e6c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x178e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x178e70: 0xa4650004  sh          $a1, 0x4($v1)
    ctx->pc = 0x178e70u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4), (uint16_t)GPR_U32(ctx, 5));
    // 0x178e74: 0x96050016  lhu         $a1, 0x16($s0)
    ctx->pc = 0x178e74u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 22)));
    // 0x178e78: 0x93a30060  lbu         $v1, 0x60($sp)
    ctx->pc = 0x178e78u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x178e7c: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x178e7cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x178e80: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x178e80u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x178e84: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x178e84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x178e88: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x178e88u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x178e8c: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x178e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x178e90: 0x2463cca0  addiu       $v1, $v1, -0x3360
    ctx->pc = 0x178e90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954144));
    // 0x178e94: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x178e94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x178e98: 0xa4650006  sh          $a1, 0x6($v1)
    ctx->pc = 0x178e98u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 6), (uint16_t)GPR_U32(ctx, 5));
    // 0x178e9c: 0xde050018  ld          $a1, 0x18($s0)
    ctx->pc = 0x178e9cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x178ea0: 0x93a30060  lbu         $v1, 0x60($sp)
    ctx->pc = 0x178ea0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x178ea4: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x178ea4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x178ea8: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x178ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x178eac: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x178eacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x178eb0: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x178eb0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x178eb4: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x178eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x178eb8: 0x2463cca0  addiu       $v1, $v1, -0x3360
    ctx->pc = 0x178eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954144));
    // 0x178ebc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x178ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x178ec0: 0x24630018  addiu       $v1, $v1, 0x18
    ctx->pc = 0x178ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
    // 0x178ec4: 0xfc650000  sd          $a1, 0x0($v1)
    ctx->pc = 0x178ec4u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 5));
    // 0x178ec8: 0xde050020  ld          $a1, 0x20($s0)
    ctx->pc = 0x178ec8u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x178ecc: 0x93a30060  lbu         $v1, 0x60($sp)
    ctx->pc = 0x178eccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x178ed0: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x178ed0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x178ed4: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x178ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x178ed8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x178ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x178edc: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x178edcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x178ee0: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x178ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x178ee4: 0x2463cca0  addiu       $v1, $v1, -0x3360
    ctx->pc = 0x178ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954144));
    // 0x178ee8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x178ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x178eec: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x178eecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x178ef0: 0xfc650000  sd          $a1, 0x0($v1)
    ctx->pc = 0x178ef0u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 5));
    // 0x178ef4: 0x93a30060  lbu         $v1, 0x60($sp)
    ctx->pc = 0x178ef4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x178ef8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x178ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x178efc: 0xa3a30060  sb          $v1, 0x60($sp)
    ctx->pc = 0x178efcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 96), (uint8_t)GPR_U32(ctx, 3));
label_178f00:
    // 0x178f00: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x178f00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x178f04: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x178f04u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x178f08: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x178f08u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x178f0c: 0x0  nop
    ctx->pc = 0x178f0cu;
    // NOP
label_178f10:
    // 0x178f10: 0x96830006  lhu         $v1, 0x6($s4)
    ctx->pc = 0x178f10u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 6)));
    // 0x178f14: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x178f14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x178f18: 0x243182b  sltu        $v1, $s2, $v1
    ctx->pc = 0x178f18u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x178f1c: 0x1460ff48  bnez        $v1, . + 4 + (-0xB8 << 2)
    ctx->pc = 0x178F1Cu;
    {
        const bool branch_taken_0x178f1c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x178f1c) {
            ctx->pc = 0x178C40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_178c40;
        }
    }
    ctx->pc = 0x178F24u;
    // 0x178f24: 0x7bbf0050  lq          $ra, 0x50($sp)
    ctx->pc = 0x178f24u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x178f28: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x178f28u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x178f2c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x178f2cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x178f30: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x178f30u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x178f34: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x178f34u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x178f38: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x178f38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x178f3c: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x178f3cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x178f40: 0x3e00008  jr          $ra
    ctx->pc = 0x178F40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x178F40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x178F48u;
}
