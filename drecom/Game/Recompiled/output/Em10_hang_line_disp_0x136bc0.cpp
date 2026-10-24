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

// Function: Em10_hang_line_disp
// Address: 0x136bc0 - 0x137474
void Em10_hang_line_disp_0x136bc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em10_hang_line_disp_0x136bc0");
#endif

    switch (ctx->pc) {
        case 0x136c50u: goto label_136c50;
        case 0x136c60u: goto label_136c60;
        case 0x136ca0u: goto label_136ca0;
        case 0x136cc4u: goto label_136cc4;
        case 0x136d9cu: goto label_136d9c;
        case 0x136e04u: goto label_136e04;
        case 0x136e14u: goto label_136e14;
        case 0x136e24u: goto label_136e24;
        case 0x136e34u: goto label_136e34;
        case 0x136f40u: goto label_136f40;
        case 0x136f60u: goto label_136f60;
        case 0x136f80u: goto label_136f80;
        case 0x136fa0u: goto label_136fa0;
        case 0x13720cu: goto label_13720c;
        case 0x1372dcu: goto label_1372dc;
        case 0x1373a8u: goto label_1373a8;
        case 0x137400u: goto label_137400;
        default: break;
    }

    ctx->pc = 0x136bc0u;

    // 0x136bc0: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x136bc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
    // 0x136bc4: 0x7fbf0080  sq          $ra, 0x80($sp)
    ctx->pc = 0x136bc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 31));
    // 0x136bc8: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x136bc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x136bcc: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x136bccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x136bd0: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x136bd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x136bd4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x136bd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x136bd8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x136bd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x136bdc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x136bdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x136be0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x136be0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x136be4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x136be4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x136be8: 0xafa40128  sw          $a0, 0x128($sp)
    ctx->pc = 0x136be8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 296), GPR_U32(ctx, 4));
    // 0x136bec: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x136becu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x136bf0: 0x24651330  addiu       $a1, $v1, 0x1330
    ctx->pc = 0x136bf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x136bf4: 0x70a0be28  paddub      $s7, $a1, $zero
    ctx->pc = 0x136bf4u;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x136bf8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x136bf8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x136bfc: 0x8c24013c  lw          $a0, 0x13C($at)
    ctx->pc = 0x136bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D013Cu));
    // 0x136c00: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x136c00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x136c04: 0x8c236840  lw          $v1, 0x6840($at)
    ctx->pc = 0x136c04u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3B6840u));
    // 0x136c08: 0x10830007  beq         $a0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x136C08u;
    {
        const bool branch_taken_0x136c08 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x136c08) {
            ctx->pc = 0x136C28u;
            goto label_136c28;
        }
    }
    ctx->pc = 0x136C10u;
    // 0x136c10: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x136c10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x136c14: 0x8c24013c  lw          $a0, 0x13C($at)
    ctx->pc = 0x136c14u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D013Cu));
    // 0x136c18: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x136c18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x136c1c: 0xac246840  sw          $a0, 0x6840($at)
    ctx->pc = 0x136c1cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x3B6840u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3B6840u, _value); } while (0);
    // 0x136c20: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x136c20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x136c24: 0xac206844  sw          $zero, 0x6844($at)
    ctx->pc = 0x136c24u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3B6844u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3B6844u, _value); } while (0);
label_136c28:
    // 0x136c28: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x136c28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x136c2c: 0x846310a6  lh          $v1, 0x10A6($v1)
    ctx->pc = 0x136c2cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4262)));
    // 0x136c30: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x136c30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x136c34: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x136c34u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x136c38: 0x4600202  bltz        $v1, . + 4 + (0x202 << 2)
    ctx->pc = 0x136C38u;
    {
        const bool branch_taken_0x136c38 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x136c38) {
            ctx->pc = 0x137444u;
            goto label_137444;
        }
    }
    ctx->pc = 0x136C40u;
    // 0x136c40: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x136c40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x136c44: 0x24440120  addiu       $a0, $v0, 0x120
    ctx->pc = 0x136c44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x136c48: 0xc057a9c  jal         func_15EA70
    ctx->pc = 0x136C48u;
    SET_GPR_U32(ctx, 31, 0x136C50u);
    ctx->pc = 0x15EA70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15EA70u, 0x136C48u, 0x136C50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136C50u;
label_136c50:
    // 0x136c50: 0xe7a0011c  swc1        $f0, 0x11C($sp)
    ctx->pc = 0x136c50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 284), bits); }
    // 0x136c54: 0x7000b628  paddub      $s6, $zero, $zero
    ctx->pc = 0x136c54u;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x136c58: 0x100001f7  b           . + 4 + (0x1F7 << 2)
    ctx->pc = 0x136C58u;
    {
        const bool branch_taken_0x136c58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x136c58) {
            ctx->pc = 0x137438u;
            goto label_137438;
        }
    }
    ctx->pc = 0x136C60u;
label_136c60:
    // 0x136c60: 0x161900  sll         $v1, $s6, 4
    ctx->pc = 0x136c60u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 22), 4));
    // 0x136c64: 0x2e31821  addu        $v1, $s7, $v1
    ctx->pc = 0x136c64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 3)));
    // 0x136c68: 0x2471004c  addiu       $s1, $v1, 0x4C
    ctx->pc = 0x136c68u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 76));
    // 0x136c6c: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x136c6cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x136c70: 0x106001ef  beqz        $v1, . + 4 + (0x1EF << 2)
    ctx->pc = 0x136C70u;
    {
        const bool branch_taken_0x136c70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x136c70) {
            ctx->pc = 0x137430u;
            goto label_137430;
        }
    }
    ctx->pc = 0x136C78u;
    // 0x136c78: 0x82230003  lb          $v1, 0x3($s1)
    ctx->pc = 0x136c78u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
    // 0x136c7c: 0x14600018  bnez        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x136C7Cu;
    {
        const bool branch_taken_0x136c7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x136c7c) {
            ctx->pc = 0x136CE0u;
            goto label_136ce0;
        }
    }
    ctx->pc = 0x136C84u;
    // 0x136c84: 0xa2200000  sb          $zero, 0x0($s1)
    ctx->pc = 0x136c84u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x136c88: 0x8ee40020  lw          $a0, 0x20($s7)
    ctx->pc = 0x136c88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 32)));
    // 0x136c8c: 0x30820004  andi        $v0, $a0, 0x4
    ctx->pc = 0x136c8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
    // 0x136c90: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x136C90u;
    {
        const bool branch_taken_0x136c90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x136c90) {
            ctx->pc = 0x136CBCu;
            goto label_136cbc;
        }
    }
    ctx->pc = 0x136C98u;
    // 0x136c98: 0xc067694  jal         func_19DA50
    ctx->pc = 0x136C98u;
    SET_GPR_U32(ctx, 31, 0x136CA0u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x136C98u, 0x136CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136CA0u;
label_136ca0:
    // 0x136ca0: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x136ca0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x136ca4: 0x3083007f  andi        $v1, $a0, 0x7F
    ctx->pc = 0x136ca4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)127);
    // 0x136ca8: 0x31e3c  dsll32      $v1, $v1, 24
    ctx->pc = 0x136ca8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
    // 0x136cac: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x136cacu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x136cb0: 0xa2230002  sb          $v1, 0x2($s1)
    ctx->pc = 0x136cb0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x136cb4: 0x100001de  b           . + 4 + (0x1DE << 2)
    ctx->pc = 0x136CB4u;
    {
        const bool branch_taken_0x136cb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x136cb4) {
            ctx->pc = 0x137430u;
            goto label_137430;
        }
    }
    ctx->pc = 0x136CBCu;
label_136cbc:
    // 0x136cbc: 0xc067694  jal         func_19DA50
    ctx->pc = 0x136CBCu;
    SET_GPR_U32(ctx, 31, 0x136CC4u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x136CBCu, 0x136CC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136CC4u;
label_136cc4:
    // 0x136cc4: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x136cc4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x136cc8: 0x3243003f  andi        $v1, $s2, 0x3F
    ctx->pc = 0x136cc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)63);
    // 0x136ccc: 0x31e3c  dsll32      $v1, $v1, 24
    ctx->pc = 0x136cccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
    // 0x136cd0: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x136cd0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x136cd4: 0xa2230002  sb          $v1, 0x2($s1)
    ctx->pc = 0x136cd4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x136cd8: 0x100001d5  b           . + 4 + (0x1D5 << 2)
    ctx->pc = 0x136CD8u;
    {
        const bool branch_taken_0x136cd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x136cd8) {
            ctx->pc = 0x137430u;
            goto label_137430;
        }
    }
    ctx->pc = 0x136CE0u;
label_136ce0:
    // 0x136ce0: 0x82230003  lb          $v1, 0x3($s1)
    ctx->pc = 0x136ce0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
    // 0x136ce4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x136ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x136ce8: 0xa2230003  sb          $v1, 0x3($s1)
    ctx->pc = 0x136ce8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x136cec: 0x82230003  lb          $v1, 0x3($s1)
    ctx->pc = 0x136cecu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
    // 0x136cf0: 0x31e3c  dsll32      $v1, $v1, 24
    ctx->pc = 0x136cf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
    // 0x136cf4: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x136cf4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x136cf8: 0x28610007  slti        $at, $v1, 0x7
    ctx->pc = 0x136cf8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x136cfc: 0x14200014  bnez        $at, . + 4 + (0x14 << 2)
    ctx->pc = 0x136CFCu;
    {
        const bool branch_taken_0x136cfc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x136cfc) {
            ctx->pc = 0x136D50u;
            goto label_136d50;
        }
    }
    ctx->pc = 0x136D04u;
    // 0x136d04: 0x82230003  lb          $v1, 0x3($s1)
    ctx->pc = 0x136d04u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
    // 0x136d08: 0x31e3c  dsll32      $v1, $v1, 24
    ctx->pc = 0x136d08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
    // 0x136d0c: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x136d0cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x136d10: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x136d10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x136d14: 0x832023  subu        $a0, $a0, $v1
    ctx->pc = 0x136d14u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x136d18: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x136d18u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x136d1c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x136d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x136d20: 0x39840  sll         $s3, $v1, 1
    ctx->pc = 0x136d20u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x136d24: 0x131e3c  dsll32      $v1, $s3, 24
    ctx->pc = 0x136d24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) << (32 + 24));
    // 0x136d28: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x136d28u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x136d2c: 0x3ae3c  dsll32      $s5, $v1, 24
    ctx->pc = 0x136d2cu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 3) << (32 + 24));
    // 0x136d30: 0x15ae3f  dsra32      $s5, $s5, 24
    ctx->pc = 0x136d30u;
    SET_GPR_S64(ctx, 21, GPR_S64(ctx, 21) >> (32 + 24));
    // 0x136d34: 0x151e3c  dsll32      $v1, $s5, 24
    ctx->pc = 0x136d34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) << (32 + 24));
    // 0x136d38: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x136d38u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x136d3c: 0x4610014  bgez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x136D3Cu;
    {
        const bool branch_taken_0x136d3c = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x136d3c) {
            ctx->pc = 0x136D90u;
            goto label_136d90;
        }
    }
    ctx->pc = 0x136D44u;
    // 0x136d44: 0x7000ae28  paddub      $s5, $zero, $zero
    ctx->pc = 0x136d44u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x136d48: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x136D48u;
    {
        const bool branch_taken_0x136d48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x136d48) {
            ctx->pc = 0x136D90u;
            goto label_136d90;
        }
    }
    ctx->pc = 0x136D50u;
label_136d50:
    // 0x136d50: 0x82230003  lb          $v1, 0x3($s1)
    ctx->pc = 0x136d50u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
    // 0x136d54: 0x3263c  dsll32      $a0, $v1, 24
    ctx->pc = 0x136d54u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 24));
    // 0x136d58: 0x4263f  dsra32      $a0, $a0, 24
    ctx->pc = 0x136d58u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
    // 0x136d5c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x136d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x136d60: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x136d60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x136d64: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x136d64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x136d68: 0x31e3c  dsll32      $v1, $v1, 24
    ctx->pc = 0x136d68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
    // 0x136d6c: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x136d6cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x136d70: 0x3ae3c  dsll32      $s5, $v1, 24
    ctx->pc = 0x136d70u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 3) << (32 + 24));
    // 0x136d74: 0x15ae3f  dsra32      $s5, $s5, 24
    ctx->pc = 0x136d74u;
    SET_GPR_S64(ctx, 21, GPR_S64(ctx, 21) >> (32 + 24));
    // 0x136d78: 0x151e3c  dsll32      $v1, $s5, 24
    ctx->pc = 0x136d78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) << (32 + 24));
    // 0x136d7c: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x136d7cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x136d80: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x136D80u;
    {
        const bool branch_taken_0x136d80 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x136d80) {
            ctx->pc = 0x136D90u;
            goto label_136d90;
        }
    }
    ctx->pc = 0x136D88u;
    // 0x136d88: 0x7000ae28  paddub      $s5, $zero, $zero
    ctx->pc = 0x136d88u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x136d8c: 0x0  nop
    ctx->pc = 0x136d8cu;
    // NOP
label_136d90:
    // 0x136d90: 0x70009e28  paddub      $s3, $zero, $zero
    ctx->pc = 0x136d90u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x136d94: 0x100001a2  b           . + 4 + (0x1A2 << 2)
    ctx->pc = 0x136D94u;
    {
        const bool branch_taken_0x136d94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x136d94) {
            ctx->pc = 0x137420u;
            goto label_137420;
        }
    }
    ctx->pc = 0x136D9Cu;
label_136d9c:
    // 0x136d9c: 0x161900  sll         $v1, $s6, 4
    ctx->pc = 0x136d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 22), 4));
    // 0x136da0: 0x2e32021  addu        $a0, $s7, $v1
    ctx->pc = 0x136da0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 3)));
    // 0x136da4: 0x1318c0  sll         $v1, $s3, 3
    ctx->pc = 0x136da4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x136da8: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x136da8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x136dac: 0x2471004c  addiu       $s1, $v1, 0x4C
    ctx->pc = 0x136dacu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 76));
    // 0x136db0: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x136db0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x136db4: 0x3c0341c8  lui         $v1, 0x41C8
    ctx->pc = 0x136db4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16840 << 16));
    // 0x136db8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x136db8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x136dbc: 0x0  nop
    ctx->pc = 0x136dbcu;
    // NOP
    // 0x136dc0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x136dc0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x136dc4: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x136dc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x136dc8: 0x92230001  lbu         $v1, 0x1($s1)
    ctx->pc = 0x136dc8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x136dcc: 0x307400ff  andi        $s4, $v1, 0xFF
    ctx->pc = 0x136dccu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x136dd0: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x136dd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x136dd4: 0x8c236844  lw          $v1, 0x6844($at)
    ctx->pc = 0x136dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3B6844u));
    // 0x136dd8: 0x2c610020  sltiu       $at, $v1, 0x20
    ctx->pc = 0x136dd8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x136ddc: 0x1020018e  beqz        $at, . + 4 + (0x18E << 2)
    ctx->pc = 0x136DDCu;
    {
        const bool branch_taken_0x136ddc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x136ddc) {
            ctx->pc = 0x137418u;
            goto label_137418;
        }
    }
    ctx->pc = 0x136DE4u;
    // 0x136de4: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x136de4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x136de8: 0x141980  sll         $v1, $s4, 6
    ctx->pc = 0x136de8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 6));
    // 0x136dec: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x136decu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x136df0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x136df0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x136df4: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x136df4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x136df8: 0x24450030  addiu       $a1, $v0, 0x30
    ctx->pc = 0x136df8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x136dfc: 0xc040c9e  jal         func_103278
    ctx->pc = 0x136DFCu;
    SET_GPR_U32(ctx, 31, 0x136E04u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x136E04u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x136E04u) { return; }
    ctx->pc = 0x136E04u;
label_136e04:
    // 0x136e04: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x136e04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x136e08: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x136e08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x136e0c: 0xc040c9e  jal         func_103278
    ctx->pc = 0x136E0Cu;
    SET_GPR_U32(ctx, 31, 0x136E14u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x136E14u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x136E14u) { return; }
    ctx->pc = 0x136E14u;
label_136e14:
    // 0x136e14: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x136e14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x136e18: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x136e18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x136e1c: 0xc040c9e  jal         func_103278
    ctx->pc = 0x136E1Cu;
    SET_GPR_U32(ctx, 31, 0x136E24u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x136E24u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x136E24u) { return; }
    ctx->pc = 0x136E24u;
label_136e24:
    // 0x136e24: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x136e24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x136e28: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x136e28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x136e2c: 0xc040c9e  jal         func_103278
    ctx->pc = 0x136E2Cu;
    SET_GPR_U32(ctx, 31, 0x136E34u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x136E34u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x136E34u) { return; }
    ctx->pc = 0x136E34u;
label_136e34:
    // 0x136e34: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x136e34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x136e38: 0xc7a000d4  lwc1        $f0, 0xD4($sp)
    ctx->pc = 0x136e38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x136e3c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x136e3cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x136e40: 0xe7a000d4  swc1        $f0, 0xD4($sp)
    ctx->pc = 0x136e40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    // 0x136e44: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x136e44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x136e48: 0x3c0343fa  lui         $v1, 0x43FA
    ctx->pc = 0x136e48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17402 << 16));
    // 0x136e4c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x136e4cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x136e50: 0x0  nop
    ctx->pc = 0x136e50u;
    // NOP
    // 0x136e54: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x136e54u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x136e58: 0xc7a000e4  lwc1        $f0, 0xE4($sp)
    ctx->pc = 0x136e58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x136e5c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x136e5cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x136e60: 0xe7a000e4  swc1        $f0, 0xE4($sp)
    ctx->pc = 0x136e60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
    // 0x136e64: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x136e64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x136e68: 0x3c0344fa  lui         $v1, 0x44FA
    ctx->pc = 0x136e68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17658 << 16));
    // 0x136e6c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x136e6cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x136e70: 0x0  nop
    ctx->pc = 0x136e70u;
    // NOP
    // 0x136e74: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x136e74u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x136e78: 0xc7a000f4  lwc1        $f0, 0xF4($sp)
    ctx->pc = 0x136e78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x136e7c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x136e7cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x136e80: 0xe7a000f4  swc1        $f0, 0xF4($sp)
    ctx->pc = 0x136e80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
    // 0x136e84: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x136e84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x136e88: 0x3c03451c  lui         $v1, 0x451C
    ctx->pc = 0x136e88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17692 << 16));
    // 0x136e8c: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x136e8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x136e90: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x136e90u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x136e94: 0x0  nop
    ctx->pc = 0x136e94u;
    // NOP
    // 0x136e98: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x136e98u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x136e9c: 0xc7a00104  lwc1        $f0, 0x104($sp)
    ctx->pc = 0x136e9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x136ea0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x136ea0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x136ea4: 0xe7a00104  swc1        $f0, 0x104($sp)
    ctx->pc = 0x136ea4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
    // 0x136ea8: 0xc7a100d4  lwc1        $f1, 0xD4($sp)
    ctx->pc = 0x136ea8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x136eac: 0xc7a0011c  lwc1        $f0, 0x11C($sp)
    ctx->pc = 0x136eacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x136eb0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x136eb0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x136eb4: 0x0  nop
    ctx->pc = 0x136eb4u;
    // NOP
    // 0x136eb8: 0x45000157  bc1f        . + 4 + (0x157 << 2)
    ctx->pc = 0x136EB8u;
    {
        const bool branch_taken_0x136eb8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x136eb8) {
            ctx->pc = 0x137418u;
            goto label_137418;
        }
    }
    ctx->pc = 0x136EC0u;
    // 0x136ec0: 0xc7a100e4  lwc1        $f1, 0xE4($sp)
    ctx->pc = 0x136ec0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x136ec4: 0xc7a0011c  lwc1        $f0, 0x11C($sp)
    ctx->pc = 0x136ec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x136ec8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x136ec8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x136ecc: 0x0  nop
    ctx->pc = 0x136eccu;
    // NOP
    // 0x136ed0: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x136ED0u;
    {
        const bool branch_taken_0x136ed0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x136ed0) {
            ctx->pc = 0x136EE0u;
            goto label_136ee0;
        }
    }
    ctx->pc = 0x136ED8u;
    // 0x136ed8: 0xc7a0011c  lwc1        $f0, 0x11C($sp)
    ctx->pc = 0x136ed8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x136edc: 0xe7a000e4  swc1        $f0, 0xE4($sp)
    ctx->pc = 0x136edcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
label_136ee0:
    // 0x136ee0: 0xc7a100f4  lwc1        $f1, 0xF4($sp)
    ctx->pc = 0x136ee0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x136ee4: 0xc7a0011c  lwc1        $f0, 0x11C($sp)
    ctx->pc = 0x136ee4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x136ee8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x136ee8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x136eec: 0x0  nop
    ctx->pc = 0x136eecu;
    // NOP
    // 0x136ef0: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x136EF0u;
    {
        const bool branch_taken_0x136ef0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x136ef0) {
            ctx->pc = 0x136F00u;
            goto label_136f00;
        }
    }
    ctx->pc = 0x136EF8u;
    // 0x136ef8: 0xc7a0011c  lwc1        $f0, 0x11C($sp)
    ctx->pc = 0x136ef8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x136efc: 0xe7a000f4  swc1        $f0, 0xF4($sp)
    ctx->pc = 0x136efcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
label_136f00:
    // 0x136f00: 0xc7a10104  lwc1        $f1, 0x104($sp)
    ctx->pc = 0x136f00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x136f04: 0xc7a0011c  lwc1        $f0, 0x11C($sp)
    ctx->pc = 0x136f04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x136f08: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x136f08u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x136f0c: 0x0  nop
    ctx->pc = 0x136f0cu;
    // NOP
    // 0x136f10: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x136F10u;
    {
        const bool branch_taken_0x136f10 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x136f10) {
            ctx->pc = 0x136F20u;
            goto label_136f20;
        }
    }
    ctx->pc = 0x136F18u;
    // 0x136f18: 0xc7a0011c  lwc1        $f0, 0x11C($sp)
    ctx->pc = 0x136f18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x136f1c: 0xe7a00104  swc1        $f0, 0x104($sp)
    ctx->pc = 0x136f1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
label_136f20:
    // 0x136f20: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x136f20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x136f24: 0x8c220af0  lw          $v0, 0xAF0($at)
    ctx->pc = 0x136f24u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0AF0u));
    // 0x136f28: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x136f28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x136f2c: 0x24450050  addiu       $a1, $v0, 0x50
    ctx->pc = 0x136f2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x136f30: 0x27a600d0  addiu       $a2, $sp, 0xD0
    ctx->pc = 0x136f30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x136f34: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x136f34u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x136f38: 0xc040eb2  jal         func_103AC8
    ctx->pc = 0x136F38u;
    SET_GPR_U32(ctx, 31, 0x136F40u);
    ctx->pc = 0x103AC8u;
    {
        ctx->pc = 0x136F40u;
        ps2_stubs::sceVu0RotTransPers(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x136F40u) { return; }
    ctx->pc = 0x136F40u;
label_136f40:
    // 0x136f40: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x136f40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x136f44: 0x8c220af0  lw          $v0, 0xAF0($at)
    ctx->pc = 0x136f44u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0AF0u));
    // 0x136f48: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x136f48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x136f4c: 0x24450050  addiu       $a1, $v0, 0x50
    ctx->pc = 0x136f4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x136f50: 0x27a600e0  addiu       $a2, $sp, 0xE0
    ctx->pc = 0x136f50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x136f54: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x136f54u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x136f58: 0xc040eb2  jal         func_103AC8
    ctx->pc = 0x136F58u;
    SET_GPR_U32(ctx, 31, 0x136F60u);
    ctx->pc = 0x103AC8u;
    {
        ctx->pc = 0x136F60u;
        ps2_stubs::sceVu0RotTransPers(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x136F60u) { return; }
    ctx->pc = 0x136F60u;
label_136f60:
    // 0x136f60: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x136f60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x136f64: 0x8c220af0  lw          $v0, 0xAF0($at)
    ctx->pc = 0x136f64u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0AF0u));
    // 0x136f68: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x136f68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x136f6c: 0x24450050  addiu       $a1, $v0, 0x50
    ctx->pc = 0x136f6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x136f70: 0x27a600f0  addiu       $a2, $sp, 0xF0
    ctx->pc = 0x136f70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x136f74: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x136f74u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x136f78: 0xc040eb2  jal         func_103AC8
    ctx->pc = 0x136F78u;
    SET_GPR_U32(ctx, 31, 0x136F80u);
    ctx->pc = 0x103AC8u;
    {
        ctx->pc = 0x136F80u;
        ps2_stubs::sceVu0RotTransPers(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x136F80u) { return; }
    ctx->pc = 0x136F80u;
label_136f80:
    // 0x136f80: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x136f80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x136f84: 0x8c220af0  lw          $v0, 0xAF0($at)
    ctx->pc = 0x136f84u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0AF0u));
    // 0x136f88: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x136f88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x136f8c: 0x24450050  addiu       $a1, $v0, 0x50
    ctx->pc = 0x136f8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x136f90: 0x27a60100  addiu       $a2, $sp, 0x100
    ctx->pc = 0x136f90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x136f94: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x136f94u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x136f98: 0xc040eb2  jal         func_103AC8
    ctx->pc = 0x136F98u;
    SET_GPR_U32(ctx, 31, 0x136FA0u);
    ctx->pc = 0x103AC8u;
    {
        ctx->pc = 0x136FA0u;
        ps2_stubs::sceVu0RotTransPers(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x136FA0u) { return; }
    ctx->pc = 0x136FA0u;
label_136fa0:
    // 0x136fa0: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x136fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x136fa4: 0x460011c  bltz        $v1, . + 4 + (0x11C << 2)
    ctx->pc = 0x136FA4u;
    {
        const bool branch_taken_0x136fa4 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x136fa4) {
            ctx->pc = 0x137418u;
            goto label_137418;
        }
    }
    ctx->pc = 0x136FACu;
    // 0x136fac: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x136facu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x136fb0: 0x3401fff1  ori         $at, $zero, 0xFFF1
    ctx->pc = 0x136fb0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65521);
    // 0x136fb4: 0x61082a  slt         $at, $v1, $at
    ctx->pc = 0x136fb4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
    // 0x136fb8: 0x10200117  beqz        $at, . + 4 + (0x117 << 2)
    ctx->pc = 0x136FB8u;
    {
        const bool branch_taken_0x136fb8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x136fb8) {
            ctx->pc = 0x137418u;
            goto label_137418;
        }
    }
    ctx->pc = 0x136FC0u;
    // 0x136fc0: 0x8fa30094  lw          $v1, 0x94($sp)
    ctx->pc = 0x136fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
    // 0x136fc4: 0x4600114  bltz        $v1, . + 4 + (0x114 << 2)
    ctx->pc = 0x136FC4u;
    {
        const bool branch_taken_0x136fc4 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x136fc4) {
            ctx->pc = 0x137418u;
            goto label_137418;
        }
    }
    ctx->pc = 0x136FCCu;
    // 0x136fcc: 0x8fa30094  lw          $v1, 0x94($sp)
    ctx->pc = 0x136fccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
    // 0x136fd0: 0x3401fff1  ori         $at, $zero, 0xFFF1
    ctx->pc = 0x136fd0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65521);
    // 0x136fd4: 0x61082a  slt         $at, $v1, $at
    ctx->pc = 0x136fd4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
    // 0x136fd8: 0x1020010f  beqz        $at, . + 4 + (0x10F << 2)
    ctx->pc = 0x136FD8u;
    {
        const bool branch_taken_0x136fd8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x136fd8) {
            ctx->pc = 0x137418u;
            goto label_137418;
        }
    }
    ctx->pc = 0x136FE0u;
    // 0x136fe0: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x136fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x136fe4: 0x460010c  bltz        $v1, . + 4 + (0x10C << 2)
    ctx->pc = 0x136FE4u;
    {
        const bool branch_taken_0x136fe4 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x136fe4) {
            ctx->pc = 0x137418u;
            goto label_137418;
        }
    }
    ctx->pc = 0x136FECu;
    // 0x136fec: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x136fecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x136ff0: 0x3401fff1  ori         $at, $zero, 0xFFF1
    ctx->pc = 0x136ff0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65521);
    // 0x136ff4: 0x61082a  slt         $at, $v1, $at
    ctx->pc = 0x136ff4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
    // 0x136ff8: 0x10200107  beqz        $at, . + 4 + (0x107 << 2)
    ctx->pc = 0x136FF8u;
    {
        const bool branch_taken_0x136ff8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x136ff8) {
            ctx->pc = 0x137418u;
            goto label_137418;
        }
    }
    ctx->pc = 0x137000u;
    // 0x137000: 0x8fa300a4  lw          $v1, 0xA4($sp)
    ctx->pc = 0x137000u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
    // 0x137004: 0x4600104  bltz        $v1, . + 4 + (0x104 << 2)
    ctx->pc = 0x137004u;
    {
        const bool branch_taken_0x137004 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x137004) {
            ctx->pc = 0x137418u;
            goto label_137418;
        }
    }
    ctx->pc = 0x13700Cu;
    // 0x13700c: 0x8fa300a4  lw          $v1, 0xA4($sp)
    ctx->pc = 0x13700cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
    // 0x137010: 0x3401fff1  ori         $at, $zero, 0xFFF1
    ctx->pc = 0x137010u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65521);
    // 0x137014: 0x61082a  slt         $at, $v1, $at
    ctx->pc = 0x137014u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
    // 0x137018: 0x102000ff  beqz        $at, . + 4 + (0xFF << 2)
    ctx->pc = 0x137018u;
    {
        const bool branch_taken_0x137018 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x137018) {
            ctx->pc = 0x137418u;
            goto label_137418;
        }
    }
    ctx->pc = 0x137020u;
    // 0x137020: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x137020u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x137024: 0x46000fc  bltz        $v1, . + 4 + (0xFC << 2)
    ctx->pc = 0x137024u;
    {
        const bool branch_taken_0x137024 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x137024) {
            ctx->pc = 0x137418u;
            goto label_137418;
        }
    }
    ctx->pc = 0x13702Cu;
    // 0x13702c: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x13702cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x137030: 0x3401fff1  ori         $at, $zero, 0xFFF1
    ctx->pc = 0x137030u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65521);
    // 0x137034: 0x61082a  slt         $at, $v1, $at
    ctx->pc = 0x137034u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
    // 0x137038: 0x102000f7  beqz        $at, . + 4 + (0xF7 << 2)
    ctx->pc = 0x137038u;
    {
        const bool branch_taken_0x137038 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x137038) {
            ctx->pc = 0x137418u;
            goto label_137418;
        }
    }
    ctx->pc = 0x137040u;
    // 0x137040: 0x8fa300b4  lw          $v1, 0xB4($sp)
    ctx->pc = 0x137040u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x137044: 0x46000f4  bltz        $v1, . + 4 + (0xF4 << 2)
    ctx->pc = 0x137044u;
    {
        const bool branch_taken_0x137044 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x137044) {
            ctx->pc = 0x137418u;
            goto label_137418;
        }
    }
    ctx->pc = 0x13704Cu;
    // 0x13704c: 0x8fa300b4  lw          $v1, 0xB4($sp)
    ctx->pc = 0x13704cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x137050: 0x3401fff1  ori         $at, $zero, 0xFFF1
    ctx->pc = 0x137050u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65521);
    // 0x137054: 0x61082a  slt         $at, $v1, $at
    ctx->pc = 0x137054u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
    // 0x137058: 0x102000ef  beqz        $at, . + 4 + (0xEF << 2)
    ctx->pc = 0x137058u;
    {
        const bool branch_taken_0x137058 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x137058) {
            ctx->pc = 0x137418u;
            goto label_137418;
        }
    }
    ctx->pc = 0x137060u;
    // 0x137060: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x137060u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x137064: 0x46000ec  bltz        $v1, . + 4 + (0xEC << 2)
    ctx->pc = 0x137064u;
    {
        const bool branch_taken_0x137064 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x137064) {
            ctx->pc = 0x137418u;
            goto label_137418;
        }
    }
    ctx->pc = 0x13706Cu;
    // 0x13706c: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x13706cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x137070: 0x3401fff1  ori         $at, $zero, 0xFFF1
    ctx->pc = 0x137070u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65521);
    // 0x137074: 0x61082a  slt         $at, $v1, $at
    ctx->pc = 0x137074u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
    // 0x137078: 0x102000e7  beqz        $at, . + 4 + (0xE7 << 2)
    ctx->pc = 0x137078u;
    {
        const bool branch_taken_0x137078 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x137078) {
            ctx->pc = 0x137418u;
            goto label_137418;
        }
    }
    ctx->pc = 0x137080u;
    // 0x137080: 0x8fa300c4  lw          $v1, 0xC4($sp)
    ctx->pc = 0x137080u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
    // 0x137084: 0x46000e4  bltz        $v1, . + 4 + (0xE4 << 2)
    ctx->pc = 0x137084u;
    {
        const bool branch_taken_0x137084 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x137084) {
            ctx->pc = 0x137418u;
            goto label_137418;
        }
    }
    ctx->pc = 0x13708Cu;
    // 0x13708c: 0x8fa300c4  lw          $v1, 0xC4($sp)
    ctx->pc = 0x13708cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
    // 0x137090: 0x3401fff1  ori         $at, $zero, 0xFFF1
    ctx->pc = 0x137090u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65521);
    // 0x137094: 0x61082a  slt         $at, $v1, $at
    ctx->pc = 0x137094u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
    // 0x137098: 0x102000df  beqz        $at, . + 4 + (0xDF << 2)
    ctx->pc = 0x137098u;
    {
        const bool branch_taken_0x137098 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x137098) {
            ctx->pc = 0x137418u;
            goto label_137418;
        }
    }
    ctx->pc = 0x1370A0u;
    // 0x1370a0: 0x8fa3009c  lw          $v1, 0x9C($sp)
    ctx->pc = 0x1370a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 156)));
    // 0x1370a4: 0x28630640  slti        $v1, $v1, 0x640
    ctx->pc = 0x1370a4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)1600) ? 1 : 0);
    // 0x1370a8: 0x146000db  bnez        $v1, . + 4 + (0xDB << 2)
    ctx->pc = 0x1370A8u;
    {
        const bool branch_taken_0x1370a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1370a8) {
            ctx->pc = 0x137418u;
            goto label_137418;
        }
    }
    ctx->pc = 0x1370B0u;
    // 0x1370b0: 0x8fa300ac  lw          $v1, 0xAC($sp)
    ctx->pc = 0x1370b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x1370b4: 0x28630640  slti        $v1, $v1, 0x640
    ctx->pc = 0x1370b4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)1600) ? 1 : 0);
    // 0x1370b8: 0x146000d7  bnez        $v1, . + 4 + (0xD7 << 2)
    ctx->pc = 0x1370B8u;
    {
        const bool branch_taken_0x1370b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1370b8) {
            ctx->pc = 0x137418u;
            goto label_137418;
        }
    }
    ctx->pc = 0x1370C0u;
    // 0x1370c0: 0x8fa300bc  lw          $v1, 0xBC($sp)
    ctx->pc = 0x1370c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x1370c4: 0x28630640  slti        $v1, $v1, 0x640
    ctx->pc = 0x1370c4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)1600) ? 1 : 0);
    // 0x1370c8: 0x146000d3  bnez        $v1, . + 4 + (0xD3 << 2)
    ctx->pc = 0x1370C8u;
    {
        const bool branch_taken_0x1370c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1370c8) {
            ctx->pc = 0x137418u;
            goto label_137418;
        }
    }
    ctx->pc = 0x1370D0u;
    // 0x1370d0: 0x8fa300cc  lw          $v1, 0xCC($sp)
    ctx->pc = 0x1370d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x1370d4: 0x28630640  slti        $v1, $v1, 0x640
    ctx->pc = 0x1370d4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)1600) ? 1 : 0);
    // 0x1370d8: 0x146000cf  bnez        $v1, . + 4 + (0xCF << 2)
    ctx->pc = 0x1370D8u;
    {
        const bool branch_taken_0x1370d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1370d8) {
            ctx->pc = 0x137418u;
            goto label_137418;
        }
    }
    ctx->pc = 0x1370E0u;
    // 0x1370e0: 0x8fa3009c  lw          $v1, 0x9C($sp)
    ctx->pc = 0x1370e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 156)));
    // 0x1370e4: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x1370e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x1370e8: 0x34213281  ori         $at, $at, 0x3281
    ctx->pc = 0x1370e8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)12929);
    // 0x1370ec: 0x61082a  slt         $at, $v1, $at
    ctx->pc = 0x1370ecu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
    // 0x1370f0: 0x102000c9  beqz        $at, . + 4 + (0xC9 << 2)
    ctx->pc = 0x1370F0u;
    {
        const bool branch_taken_0x1370f0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1370f0) {
            ctx->pc = 0x137418u;
            goto label_137418;
        }
    }
    ctx->pc = 0x1370F8u;
    // 0x1370f8: 0x8fa300ac  lw          $v1, 0xAC($sp)
    ctx->pc = 0x1370f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x1370fc: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x1370fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x137100: 0x34213281  ori         $at, $at, 0x3281
    ctx->pc = 0x137100u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)12929);
    // 0x137104: 0x61082a  slt         $at, $v1, $at
    ctx->pc = 0x137104u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
    // 0x137108: 0x102000c3  beqz        $at, . + 4 + (0xC3 << 2)
    ctx->pc = 0x137108u;
    {
        const bool branch_taken_0x137108 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x137108) {
            ctx->pc = 0x137418u;
            goto label_137418;
        }
    }
    ctx->pc = 0x137110u;
    // 0x137110: 0x8fa300bc  lw          $v1, 0xBC($sp)
    ctx->pc = 0x137110u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x137114: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x137114u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x137118: 0x34213281  ori         $at, $at, 0x3281
    ctx->pc = 0x137118u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)12929);
    // 0x13711c: 0x61082a  slt         $at, $v1, $at
    ctx->pc = 0x13711cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
    // 0x137120: 0x102000bd  beqz        $at, . + 4 + (0xBD << 2)
    ctx->pc = 0x137120u;
    {
        const bool branch_taken_0x137120 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x137120) {
            ctx->pc = 0x137418u;
            goto label_137418;
        }
    }
    ctx->pc = 0x137128u;
    // 0x137128: 0x8fa300cc  lw          $v1, 0xCC($sp)
    ctx->pc = 0x137128u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x13712c: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x13712cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x137130: 0x34213281  ori         $at, $at, 0x3281
    ctx->pc = 0x137130u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)12929);
    // 0x137134: 0x61082a  slt         $at, $v1, $at
    ctx->pc = 0x137134u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
    // 0x137138: 0x102000b7  beqz        $at, . + 4 + (0xB7 << 2)
    ctx->pc = 0x137138u;
    {
        const bool branch_taken_0x137138 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x137138) {
            ctx->pc = 0x137418u;
            goto label_137418;
        }
    }
    ctx->pc = 0x137140u;
    // 0x137140: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x137140u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x137144: 0x8c236844  lw          $v1, 0x6844($at)
    ctx->pc = 0x137144u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3B6844u));
    // 0x137148: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x137148u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x13714c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x13714cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x137150: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x137150u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x137154: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x137154u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x137158: 0x24426840  addiu       $v0, $v0, 0x6840
    ctx->pc = 0x137158u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26688));
    // 0x13715c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x13715cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x137160: 0x24500008  addiu       $s0, $v0, 0x8
    ctx->pc = 0x137160u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x137164: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x137164u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x137168: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x137168u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x13716c: 0x3c025000  lui         $v0, 0x5000
    ctx->pc = 0x13716cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
    // 0x137170: 0x34422209  ori         $v0, $v0, 0x2209
    ctx->pc = 0x137170u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8713);
    // 0x137174: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x137174u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x137178: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x137178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x13717c: 0x344200c0  ori         $v0, $v0, 0xC0
    ctx->pc = 0x13717cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)192);
    // 0x137180: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x137180u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x137184: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x137184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x137188: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x137188u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x13718c: 0x8fa20094  lw          $v0, 0x94($sp)
    ctx->pc = 0x13718cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
    // 0x137190: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x137190u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x137194: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x137194u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x137198: 0x2602000c  addiu       $v0, $s0, 0xC
    ctx->pc = 0x137198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x13719c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x13719cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1371a0: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1371a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1371a4: 0x21903  sra         $v1, $v0, 4
    ctx->pc = 0x1371a4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 4));
    // 0x1371a8: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x1371a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1371ac: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1371acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1371b0: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x1371b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1371b4: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x1371b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1371b8: 0x8fa200a4  lw          $v0, 0xA4($sp)
    ctx->pc = 0x1371b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
    // 0x1371bc: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1371bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1371c0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1371c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1371c4: 0x26020018  addiu       $v0, $s0, 0x18
    ctx->pc = 0x1371c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x1371c8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1371c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1371cc: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x1371ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x1371d0: 0x21903  sra         $v1, $v0, 4
    ctx->pc = 0x1371d0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 4));
    // 0x1371d4: 0x2602001c  addiu       $v0, $s0, 0x1C
    ctx->pc = 0x1371d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    // 0x1371d8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1371d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1371dc: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x1371dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x1371e0: 0x26020008  addiu       $v0, $s0, 0x8
    ctx->pc = 0x1371e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x1371e4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1371e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1371e8: 0x3c022080  lui         $v0, 0x2080
    ctx->pc = 0x1371e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8320 << 16));
    // 0x1371ec: 0x34438080  ori         $v1, $v0, 0x8080
    ctx->pc = 0x1371ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
    // 0x1371f0: 0x26020014  addiu       $v0, $s0, 0x14
    ctx->pc = 0x1371f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x1371f4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1371f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1371f8: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x1371f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x1371fc: 0x24441614  addiu       $a0, $v0, 0x1614
    ctx->pc = 0x1371fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 5652));
    // 0x137200: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x137200u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x137204: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x137204u;
    SET_GPR_U32(ctx, 31, 0x13720Cu);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x137204u, 0x13720Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13720Cu;
label_13720c:
    // 0x13720c: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x13720cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x137210: 0x8c236844  lw          $v1, 0x6844($at)
    ctx->pc = 0x137210u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3B6844u));
    // 0x137214: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x137214u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x137218: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x137218u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x13721c: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x13721cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x137220: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x137220u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x137224: 0x24426840  addiu       $v0, $v0, 0x6840
    ctx->pc = 0x137224u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26688));
    // 0x137228: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x137228u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x13722c: 0x24500028  addiu       $s0, $v0, 0x28
    ctx->pc = 0x13722cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x137230: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x137230u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x137234: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x137234u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x137238: 0x3c025000  lui         $v0, 0x5000
    ctx->pc = 0x137238u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
    // 0x13723c: 0x34422209  ori         $v0, $v0, 0x2209
    ctx->pc = 0x13723cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8713);
    // 0x137240: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x137240u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x137244: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x137244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x137248: 0x344200c0  ori         $v0, $v0, 0xC0
    ctx->pc = 0x137248u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)192);
    // 0x13724c: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x13724cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x137250: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x137250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x137254: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x137254u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x137258: 0x8fa200a4  lw          $v0, 0xA4($sp)
    ctx->pc = 0x137258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
    // 0x13725c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x13725cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x137260: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x137260u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x137264: 0x2602000c  addiu       $v0, $s0, 0xC
    ctx->pc = 0x137264u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x137268: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x137268u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x13726c: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x13726cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x137270: 0x21903  sra         $v1, $v0, 4
    ctx->pc = 0x137270u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 4));
    // 0x137274: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x137274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x137278: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x137278u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x13727c: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x13727cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x137280: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x137280u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x137284: 0x8fa200b4  lw          $v0, 0xB4($sp)
    ctx->pc = 0x137284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x137288: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x137288u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x13728c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x13728cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x137290: 0x26020018  addiu       $v0, $s0, 0x18
    ctx->pc = 0x137290u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x137294: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x137294u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x137298: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x137298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x13729c: 0x21903  sra         $v1, $v0, 4
    ctx->pc = 0x13729cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 4));
    // 0x1372a0: 0x2602001c  addiu       $v0, $s0, 0x1C
    ctx->pc = 0x1372a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    // 0x1372a4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1372a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1372a8: 0x3c022080  lui         $v0, 0x2080
    ctx->pc = 0x1372a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8320 << 16));
    // 0x1372ac: 0x34438080  ori         $v1, $v0, 0x8080
    ctx->pc = 0x1372acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
    // 0x1372b0: 0x26020008  addiu       $v0, $s0, 0x8
    ctx->pc = 0x1372b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x1372b4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1372b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1372b8: 0x3c022080  lui         $v0, 0x2080
    ctx->pc = 0x1372b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8320 << 16));
    // 0x1372bc: 0x34438080  ori         $v1, $v0, 0x8080
    ctx->pc = 0x1372bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
    // 0x1372c0: 0x26020014  addiu       $v0, $s0, 0x14
    ctx->pc = 0x1372c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x1372c4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1372c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1372c8: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x1372c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x1372cc: 0x24441614  addiu       $a0, $v0, 0x1614
    ctx->pc = 0x1372ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 5652));
    // 0x1372d0: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x1372d0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1372d4: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x1372D4u;
    SET_GPR_U32(ctx, 31, 0x1372DCu);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x1372D4u, 0x1372DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1372DCu;
label_1372dc:
    // 0x1372dc: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x1372dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x1372e0: 0x8c236844  lw          $v1, 0x6844($at)
    ctx->pc = 0x1372e0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3B6844u));
    // 0x1372e4: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1372e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1372e8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1372e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1372ec: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x1372ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x1372f0: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x1372f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x1372f4: 0x24426840  addiu       $v0, $v0, 0x6840
    ctx->pc = 0x1372f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26688));
    // 0x1372f8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1372f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1372fc: 0x24500048  addiu       $s0, $v0, 0x48
    ctx->pc = 0x1372fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
    // 0x137300: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x137300u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x137304: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x137304u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x137308: 0x3c025000  lui         $v0, 0x5000
    ctx->pc = 0x137308u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
    // 0x13730c: 0x34422209  ori         $v0, $v0, 0x2209
    ctx->pc = 0x13730cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8713);
    // 0x137310: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x137310u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x137314: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x137314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x137318: 0x344200c0  ori         $v0, $v0, 0xC0
    ctx->pc = 0x137318u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)192);
    // 0x13731c: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x13731cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x137320: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x137320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x137324: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x137324u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x137328: 0x8fa200b4  lw          $v0, 0xB4($sp)
    ctx->pc = 0x137328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x13732c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x13732cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x137330: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x137330u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x137334: 0x2602000c  addiu       $v0, $s0, 0xC
    ctx->pc = 0x137334u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x137338: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x137338u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x13733c: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x13733cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x137340: 0x21903  sra         $v1, $v0, 4
    ctx->pc = 0x137340u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 4));
    // 0x137344: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x137344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x137348: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x137348u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x13734c: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x13734cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x137350: 0x3065ffff  andi        $a1, $v1, 0xFFFF
    ctx->pc = 0x137350u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x137354: 0x8fa400c4  lw          $a0, 0xC4($sp)
    ctx->pc = 0x137354u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
    // 0x137358: 0x41c00  sll         $v1, $a0, 16
    ctx->pc = 0x137358u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x13735c: 0xa32025  or          $a0, $a1, $v1
    ctx->pc = 0x13735cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x137360: 0x26030018  addiu       $v1, $s0, 0x18
    ctx->pc = 0x137360u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x137364: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x137364u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x137368: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x137368u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x13736c: 0x31903  sra         $v1, $v1, 4
    ctx->pc = 0x13736cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 4));
    // 0x137370: 0x2602001c  addiu       $v0, $s0, 0x1C
    ctx->pc = 0x137370u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    // 0x137374: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x137374u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x137378: 0x3c032080  lui         $v1, 0x2080
    ctx->pc = 0x137378u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8320 << 16));
    // 0x13737c: 0x34648080  ori         $a0, $v1, 0x8080
    ctx->pc = 0x13737cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32896);
    // 0x137380: 0x26030008  addiu       $v1, $s0, 0x8
    ctx->pc = 0x137380u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x137384: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x137384u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x137388: 0x3c112000  lui         $s1, 0x2000
    ctx->pc = 0x137388u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)8192 << 16));
    // 0x13738c: 0x26030014  addiu       $v1, $s0, 0x14
    ctx->pc = 0x13738cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x137390: 0xac710000  sw          $s1, 0x0($v1)
    ctx->pc = 0x137390u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 17));
    // 0x137394: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x137394u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x137398: 0x24641614  addiu       $a0, $v1, 0x1614
    ctx->pc = 0x137398u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 5652));
    // 0x13739c: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x13739cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1373a0: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x1373A0u;
    SET_GPR_U32(ctx, 31, 0x1373A8u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x1373A0u, 0x1373A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1373A8u;
label_1373a8:
    // 0x1373a8: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x1373a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x1373ac: 0x8c226844  lw          $v0, 0x6844($at)
    ctx->pc = 0x1373acu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3B6844u));
    // 0x1373b0: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x1373b0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1373b4: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x1373b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x1373b8: 0x24636840  addiu       $v1, $v1, 0x6840
    ctx->pc = 0x1373b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 26688));
    // 0x1373bc: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x1373bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1373c0: 0x24520c08  addiu       $s2, $v0, 0xC08
    ctx->pc = 0x1373c0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 3080));
    // 0x1373c4: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x1373c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x1373c8: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x1373c8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x1373cc: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x1373ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
    // 0x1373d0: 0x34631043  ori         $v1, $v1, 0x1043
    ctx->pc = 0x1373d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4163);
    // 0x1373d4: 0xae430004  sw          $v1, 0x4($s2)
    ctx->pc = 0x1373d4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
    // 0x1373d8: 0x32a300ff  andi        $v1, $s5, 0xFF
    ctx->pc = 0x1373d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)255);
    // 0x1373dc: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1373dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1373e0: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1373e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1373e4: 0x34630068  ori         $v1, $v1, 0x68
    ctx->pc = 0x1373e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)104);
    // 0x1373e8: 0xfe430008  sd          $v1, 0x8($s2)
    ctx->pc = 0x1373e8u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 3));
    // 0x1373ec: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x1373ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x1373f0: 0x24641614  addiu       $a0, $v1, 0x1614
    ctx->pc = 0x1373f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 5652));
    // 0x1373f4: 0x72402e28  paddub      $a1, $s2, $zero
    ctx->pc = 0x1373f4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x1373f8: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x1373F8u;
    SET_GPR_U32(ctx, 31, 0x137400u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x1373F8u, 0x137400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137400u;
label_137400:
    // 0x137400: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x137400u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x137404: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x137404u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x137408: 0x8c236844  lw          $v1, 0x6844($at)
    ctx->pc = 0x137408u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3B6844u));
    // 0x13740c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x13740cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x137410: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x137410u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x137414: 0xac236844  sw          $v1, 0x6844($at)
    ctx->pc = 0x137414u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x3B6844u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3B6844u, _value); } while (0);
label_137418:
    // 0x137418: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x137418u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x13741c: 0x0  nop
    ctx->pc = 0x13741cu;
    // NOP
label_137420:
    // 0x137420: 0x2a630002  slti        $v1, $s3, 0x2
    ctx->pc = 0x137420u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x137424: 0x1460fe5d  bnez        $v1, . + 4 + (-0x1A3 << 2)
    ctx->pc = 0x137424u;
    {
        const bool branch_taken_0x137424 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x137424) {
            ctx->pc = 0x136D9Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_136d9c;
        }
    }
    ctx->pc = 0x13742Cu;
    // 0x13742c: 0x0  nop
    ctx->pc = 0x13742cu;
    // NOP
label_137430:
    // 0x137430: 0x26d50001  addiu       $s5, $s6, 0x1
    ctx->pc = 0x137430u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x137434: 0x72a0b628  paddub      $s6, $s5, $zero
    ctx->pc = 0x137434u;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
label_137438:
    // 0x137438: 0x2ac30003  slti        $v1, $s6, 0x3
    ctx->pc = 0x137438u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x13743c: 0x1460fe08  bnez        $v1, . + 4 + (-0x1F8 << 2)
    ctx->pc = 0x13743Cu;
    {
        const bool branch_taken_0x13743c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x13743c) {
            ctx->pc = 0x136C60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_136c60;
        }
    }
    ctx->pc = 0x137444u;
label_137444:
    // 0x137444: 0x7bbf0080  lq          $ra, 0x80($sp)
    ctx->pc = 0x137444u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x137448: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x137448u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x13744c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x13744cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x137450: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x137450u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x137454: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x137454u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x137458: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x137458u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13745c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x13745cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x137460: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x137460u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x137464: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x137464u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x137468: 0x27bd0130  addiu       $sp, $sp, 0x130
    ctx->pc = 0x137468u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x13746c: 0x3e00008  jr          $ra
    ctx->pc = 0x13746Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13746Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x137474u;
}
