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

// Function: Camera_zoom
// Address: 0x180b80 - 0x182430
void Camera_zoom_0x180b80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Camera_zoom_0x180b80");
#endif

    switch (ctx->pc) {
        case 0x180d0cu: goto label_180d0c;
        case 0x180fe0u: goto label_180fe0;
        case 0x1811dcu: goto label_1811dc;
        case 0x1814b0u: goto label_1814b0;
        case 0x181868u: goto label_181868;
        case 0x18197cu: goto label_18197c;
        case 0x181b28u: goto label_181b28;
        case 0x181c44u: goto label_181c44;
        case 0x181df0u: goto label_181df0;
        case 0x181f0cu: goto label_181f0c;
        case 0x1821c8u: goto label_1821c8;
        case 0x182358u: goto label_182358;
        case 0x182404u: goto label_182404;
        case 0x182418u: goto label_182418;
        default: break;
    }

    ctx->pc = 0x180b80u;

    // 0x180b80: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x180b80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x180b84: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x180b84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x180b88: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x180b88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x180b8c: 0xafa40058  sw          $a0, 0x58($sp)
    ctx->pc = 0x180b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
    // 0x180b90: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x180b90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x180b94: 0x8c230af0  lw          $v1, 0xAF0($at)
    ctx->pc = 0x180b94u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0AF0u));
    // 0x180b98: 0x70608628  paddub      $s0, $v1, $zero
    ctx->pc = 0x180b98u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x180b9c: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x180b9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x180ba0: 0x8423f138  lh          $v1, -0xEC8($at)
    ctx->pc = 0x180ba0u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x47F138u));
    // 0x180ba4: 0x3343c  dsll32      $a2, $v1, 16
    ctx->pc = 0x180ba4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 16));
    // 0x180ba8: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x180ba8u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x180bac: 0x61900  sll         $v1, $a2, 4
    ctx->pc = 0x180bacu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x180bb0: 0x663021  addu        $a2, $v1, $a2
    ctx->pc = 0x180bb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x180bb4: 0x63940  sll         $a3, $a2, 5
    ctx->pc = 0x180bb4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
    // 0x180bb8: 0x3c03004a  lui         $v1, 0x4A
    ctx->pc = 0x180bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)74 << 16));
    // 0x180bbc: 0x24661380  addiu       $a2, $v1, 0x1380
    ctx->pc = 0x180bbcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4992));
    // 0x180bc0: 0xc71821  addu        $v1, $a2, $a3
    ctx->pc = 0x180bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x180bc4: 0x8c630158  lw          $v1, 0x158($v1)
    ctx->pc = 0x180bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 344)));
    // 0x180bc8: 0x3c062000  lui         $a2, 0x2000
    ctx->pc = 0x180bc8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8192 << 16));
    // 0x180bcc: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x180bccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x180bd0: 0x146004f5  bnez        $v1, . + 4 + (0x4F5 << 2)
    ctx->pc = 0x180BD0u;
    {
        const bool branch_taken_0x180bd0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x180bd0) {
            ctx->pc = 0x181FA8u;
            goto label_181fa8;
        }
    }
    ctx->pc = 0x180BD8u;
    // 0x180bd8: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x180bd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x180bdc: 0xac20f230  sw          $zero, -0xDD0($at)
    ctx->pc = 0x180bdcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x47F230u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47F230u, _value); } while (0);
    // 0x180be0: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x180be0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x180be4: 0x8423f138  lh          $v1, -0xEC8($at)
    ctx->pc = 0x180be4u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x47F138u));
    // 0x180be8: 0x33c3c  dsll32      $a3, $v1, 16
    ctx->pc = 0x180be8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) << (32 + 16));
    // 0x180bec: 0x73c3f  dsra32      $a3, $a3, 16
    ctx->pc = 0x180becu;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 16));
    // 0x180bf0: 0x71900  sll         $v1, $a3, 4
    ctx->pc = 0x180bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x180bf4: 0x673021  addu        $a2, $v1, $a3
    ctx->pc = 0x180bf4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x180bf8: 0x63940  sll         $a3, $a2, 5
    ctx->pc = 0x180bf8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
    // 0x180bfc: 0x3c03004a  lui         $v1, 0x4A
    ctx->pc = 0x180bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)74 << 16));
    // 0x180c00: 0x24661380  addiu       $a2, $v1, 0x1380
    ctx->pc = 0x180c00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4992));
    // 0x180c04: 0xc71821  addu        $v1, $a2, $a3
    ctx->pc = 0x180c04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x180c08: 0x8c630160  lw          $v1, 0x160($v1)
    ctx->pc = 0x180c08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 352)));
    // 0x180c0c: 0x33102  srl         $a2, $v1, 4
    ctx->pc = 0x180c0cu;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x180c10: 0x30c30003  andi        $v1, $a2, 0x3
    ctx->pc = 0x180c10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)3);
    // 0x180c14: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x180c14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x180c18: 0xac23f220  sw          $v1, -0xDE0($at)
    ctx->pc = 0x180c18u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x47F220u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47F220u, _value); } while (0);
    // 0x180c1c: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x180c1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x180c20: 0x8423f138  lh          $v1, -0xEC8($at)
    ctx->pc = 0x180c20u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x47F138u));
    // 0x180c24: 0x3343c  dsll32      $a2, $v1, 16
    ctx->pc = 0x180c24u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 16));
    // 0x180c28: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x180c28u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x180c2c: 0x61900  sll         $v1, $a2, 4
    ctx->pc = 0x180c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x180c30: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x180c30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x180c34: 0x33140  sll         $a2, $v1, 5
    ctx->pc = 0x180c34u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x180c38: 0x3c03004a  lui         $v1, 0x4A
    ctx->pc = 0x180c38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)74 << 16));
    // 0x180c3c: 0x24631380  addiu       $v1, $v1, 0x1380
    ctx->pc = 0x180c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4992));
    // 0x180c40: 0x663821  addu        $a3, $v1, $a2
    ctx->pc = 0x180c40u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x180c44: 0x8ce30158  lw          $v1, 0x158($a3)
    ctx->pc = 0x180c44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 344)));
    // 0x180c48: 0x3c06000c  lui         $a2, 0xC
    ctx->pc = 0x180c48u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)12 << 16));
    // 0x180c4c: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x180c4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x180c50: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x180c50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x180c54: 0xac23f228  sw          $v1, -0xDD8($at)
    ctx->pc = 0x180c54u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x47F228u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47F228u, _value); } while (0);
    // 0x180c58: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x180c58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x180c5c: 0x8c28f228  lw          $t0, -0xDD8($at)
    ctx->pc = 0x180c5cu;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x47F228u));
    // 0x180c60: 0x3c07000c  lui         $a3, 0xC
    ctx->pc = 0x180c60u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)12 << 16));
    // 0x180c64: 0x110701f4  beq         $t0, $a3, . + 4 + (0x1F4 << 2)
    ctx->pc = 0x180C64u;
    {
        const bool branch_taken_0x180c64 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 7));
        if (branch_taken_0x180c64) {
            ctx->pc = 0x181438u;
            goto label_181438;
        }
    }
    ctx->pc = 0x180C6Cu;
    // 0x180c6c: 0x3c030008  lui         $v1, 0x8
    ctx->pc = 0x180c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
    // 0x180c70: 0x1103013c  beq         $t0, $v1, . + 4 + (0x13C << 2)
    ctx->pc = 0x180C70u;
    {
        const bool branch_taken_0x180c70 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 3));
        if (branch_taken_0x180c70) {
            ctx->pc = 0x181164u;
            goto label_181164;
        }
    }
    ctx->pc = 0x180C78u;
    // 0x180c78: 0x3c060004  lui         $a2, 0x4
    ctx->pc = 0x180c78u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4 << 16));
    // 0x180c7c: 0x110600ba  beq         $t0, $a2, . + 4 + (0xBA << 2)
    ctx->pc = 0x180C7Cu;
    {
        const bool branch_taken_0x180c7c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 6));
        if (branch_taken_0x180c7c) {
            ctx->pc = 0x180F68u;
            goto label_180f68;
        }
    }
    ctx->pc = 0x180C84u;
    // 0x180c84: 0x11000003  beqz        $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x180C84u;
    {
        const bool branch_taken_0x180c84 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x180c84) {
            ctx->pc = 0x180C94u;
            goto label_180c94;
        }
    }
    ctx->pc = 0x180C8Cu;
    // 0x180c8c: 0x100002a6  b           . + 4 + (0x2A6 << 2)
    ctx->pc = 0x180C8Cu;
    {
        const bool branch_taken_0x180c8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x180c8c) {
            ctx->pc = 0x181728u;
            goto label_181728;
        }
    }
    ctx->pc = 0x180C94u;
label_180c94:
    // 0x180c94: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x180c94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x180c98: 0x8423f138  lh          $v1, -0xEC8($at)
    ctx->pc = 0x180c98u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x47F138u));
    // 0x180c9c: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x180c9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x180ca0: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x180ca0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x180ca4: 0x33100  sll         $a2, $v1, 4
    ctx->pc = 0x180ca4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x180ca8: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x180ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x180cac: 0x33940  sll         $a3, $v1, 5
    ctx->pc = 0x180cacu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x180cb0: 0x3c06004a  lui         $a2, 0x4A
    ctx->pc = 0x180cb0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)74 << 16));
    // 0x180cb4: 0x24c31380  addiu       $v1, $a2, 0x1380
    ctx->pc = 0x180cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4992));
    // 0x180cb8: 0x673821  addu        $a3, $v1, $a3
    ctx->pc = 0x180cb8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x180cbc: 0x8ce30158  lw          $v1, 0x158($a3)
    ctx->pc = 0x180cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 344)));
    // 0x180cc0: 0x306607ff  andi        $a2, $v1, 0x7FF
    ctx->pc = 0x180cc0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2047);
    // 0x180cc4: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x180cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x180cc8: 0x14c30023  bne         $a2, $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x180CC8u;
    {
        const bool branch_taken_0x180cc8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        if (branch_taken_0x180cc8) {
            ctx->pc = 0x180D58u;
            goto label_180d58;
        }
    }
    ctx->pc = 0x180CD0u;
    // 0x180cd0: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x180cd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x180cd4: 0x8423f138  lh          $v1, -0xEC8($at)
    ctx->pc = 0x180cd4u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x47F138u));
    // 0x180cd8: 0x3343c  dsll32      $a2, $v1, 16
    ctx->pc = 0x180cd8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 16));
    // 0x180cdc: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x180cdcu;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x180ce0: 0x61900  sll         $v1, $a2, 4
    ctx->pc = 0x180ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x180ce4: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x180ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x180ce8: 0x33940  sll         $a3, $v1, 5
    ctx->pc = 0x180ce8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x180cec: 0x3c06004a  lui         $a2, 0x4A
    ctx->pc = 0x180cecu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)74 << 16));
    // 0x180cf0: 0x24c31380  addiu       $v1, $a2, 0x1380
    ctx->pc = 0x180cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4992));
    // 0x180cf4: 0x673021  addu        $a2, $v1, $a3
    ctx->pc = 0x180cf4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x180cf8: 0x260301a0  addiu       $v1, $s0, 0x1A0
    ctx->pc = 0x180cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 416));
    // 0x180cfc: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x180cfcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x180d00: 0x70c02e28  paddub      $a1, $a2, $zero
    ctx->pc = 0x180d00u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x180d04: 0xc05ec8c  jal         func_17B230
    ctx->pc = 0x180D04u;
    SET_GPR_U32(ctx, 31, 0x180D0Cu);
    ctx->pc = 0x17B230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17B230u, 0x180D04u, 0x180D0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180D0Cu;
label_180d0c:
    // 0x180d0c: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x180d0cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x180d10: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x180d10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x180d14: 0x8423f138  lh          $v1, -0xEC8($at)
    ctx->pc = 0x180d14u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x47F138u));
    // 0x180d18: 0x3343c  dsll32      $a2, $v1, 16
    ctx->pc = 0x180d18u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 16));
    // 0x180d1c: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x180d1cu;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x180d20: 0x63900  sll         $a3, $a2, 4
    ctx->pc = 0x180d20u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x180d24: 0xe61821  addu        $v1, $a3, $a2
    ctx->pc = 0x180d24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x180d28: 0x33140  sll         $a2, $v1, 5
    ctx->pc = 0x180d28u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x180d2c: 0x3c03004a  lui         $v1, 0x4A
    ctx->pc = 0x180d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)74 << 16));
    // 0x180d30: 0x24631380  addiu       $v1, $v1, 0x1380
    ctx->pc = 0x180d30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4992));
    // 0x180d34: 0x663021  addu        $a2, $v1, $a2
    ctx->pc = 0x180d34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x180d38: 0x24c30090  addiu       $v1, $a2, 0x90
    ctx->pc = 0x180d38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 144));
    // 0x180d3c: 0x78660000  lq          $a2, 0x0($v1)
    ctx->pc = 0x180d3cu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x180d40: 0x26030190  addiu       $v1, $s0, 0x190
    ctx->pc = 0x180d40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 400));
    // 0x180d44: 0x7c660000  sq          $a2, 0x0($v1)
    ctx->pc = 0x180d44u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 6));
    // 0x180d48: 0x3c073f80  lui         $a3, 0x3F80
    ctx->pc = 0x180d48u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16256 << 16));
    // 0x180d4c: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x180d4cu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x180d50: 0x0  nop
    ctx->pc = 0x180d50u;
    // NOP
    // 0x180d54: 0xe600019c  swc1        $f0, 0x19C($s0)
    ctx->pc = 0x180d54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 412), bits); }
label_180d58:
    // 0x180d58: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x180d58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x180d5c: 0x8423f138  lh          $v1, -0xEC8($at)
    ctx->pc = 0x180d5cu;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x47F138u));
    // 0x180d60: 0x3343c  dsll32      $a2, $v1, 16
    ctx->pc = 0x180d60u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 16));
    // 0x180d64: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x180d64u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x180d68: 0x63900  sll         $a3, $a2, 4
    ctx->pc = 0x180d68u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x180d6c: 0xe61821  addu        $v1, $a3, $a2
    ctx->pc = 0x180d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x180d70: 0x33140  sll         $a2, $v1, 5
    ctx->pc = 0x180d70u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x180d74: 0x3c03004a  lui         $v1, 0x4A
    ctx->pc = 0x180d74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)74 << 16));
    // 0x180d78: 0x24631380  addiu       $v1, $v1, 0x1380
    ctx->pc = 0x180d78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4992));
    // 0x180d7c: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x180d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x180d80: 0xc4610180  lwc1        $f1, 0x180($v1)
    ctx->pc = 0x180d80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x180d84: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x180d84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x180d88: 0xe421f1f0  swc1        $f1, -0xE10($at)
    ctx->pc = 0x180d88u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x47F1F0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47F1F0u, _value); } while (0); }
    // 0x180d8c: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x180d8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x180d90: 0x8426f138  lh          $a2, -0xEC8($at)
    ctx->pc = 0x180d90u;
    SET_GPR_S32(ctx, 6, (int16_t)FAST_READ16(0x47F138u));
    // 0x180d94: 0x61c3c  dsll32      $v1, $a2, 16
    ctx->pc = 0x180d94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << (32 + 16));
    // 0x180d98: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x180d98u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x180d9c: 0x33100  sll         $a2, $v1, 4
    ctx->pc = 0x180d9cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x180da0: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x180da0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x180da4: 0x33940  sll         $a3, $v1, 5
    ctx->pc = 0x180da4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x180da8: 0x3c06004a  lui         $a2, 0x4A
    ctx->pc = 0x180da8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)74 << 16));
    // 0x180dac: 0x24c31380  addiu       $v1, $a2, 0x1380
    ctx->pc = 0x180dacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4992));
    // 0x180db0: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x180db0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x180db4: 0xc4600170  lwc1        $f0, 0x170($v1)
    ctx->pc = 0x180db4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x180db8: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x180db8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x180dbc: 0xe420f1f8  swc1        $f0, -0xE08($at)
    ctx->pc = 0x180dbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x47F1F8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47F1F8u, _value); } while (0); }
    // 0x180dc0: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x180dc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x180dc4: 0x8426f138  lh          $a2, -0xEC8($at)
    ctx->pc = 0x180dc4u;
    SET_GPR_S32(ctx, 6, (int16_t)FAST_READ16(0x47F138u));
    // 0x180dc8: 0x61c3c  dsll32      $v1, $a2, 16
    ctx->pc = 0x180dc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << (32 + 16));
    // 0x180dcc: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x180dccu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x180dd0: 0x33100  sll         $a2, $v1, 4
    ctx->pc = 0x180dd0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x180dd4: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x180dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x180dd8: 0x33140  sll         $a2, $v1, 5
    ctx->pc = 0x180dd8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x180ddc: 0x3c03004a  lui         $v1, 0x4A
    ctx->pc = 0x180ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)74 << 16));
    // 0x180de0: 0x24631380  addiu       $v1, $v1, 0x1380
    ctx->pc = 0x180de0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4992));
    // 0x180de4: 0x663821  addu        $a3, $v1, $a2
    ctx->pc = 0x180de4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x180de8: 0xc4e10170  lwc1        $f1, 0x170($a3)
    ctx->pc = 0x180de8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x180dec: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x180decu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x180df0: 0xe421f200  swc1        $f1, -0xE00($at)
    ctx->pc = 0x180df0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x47F200u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47F200u, _value); } while (0); }
    // 0x180df4: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x180df4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x180df8: 0xc420f1f0  lwc1        $f0, -0xE10($at)
    ctx->pc = 0x180df8u;
    { uint32_t bits = FAST_READ32(0x47F1F0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x180dfc: 0xe60001b0  swc1        $f0, 0x1B0($s0)
    ctx->pc = 0x180dfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 432), bits); }
    // 0x180e00: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x180e00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x180e04: 0xc421f200  lwc1        $f1, -0xE00($at)
    ctx->pc = 0x180e04u;
    { uint32_t bits = FAST_READ32(0x47F200u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x180e08: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x180e08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x180e0c: 0xc420f1f0  lwc1        $f0, -0xE10($at)
    ctx->pc = 0x180e0cu;
    { uint32_t bits = FAST_READ32(0x47F1F0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x180e10: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x180e10u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x180e14: 0x0  nop
    ctx->pc = 0x180e14u;
    // NOP
    // 0x180e18: 0x45010022  bc1t        . + 4 + (0x22 << 2)
    ctx->pc = 0x180E18u;
    {
        const bool branch_taken_0x180e18 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x180e18) {
            ctx->pc = 0x180EA4u;
            goto label_180ea4;
        }
    }
    ctx->pc = 0x180E20u;
    // 0x180e20: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x180e20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x180e24: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x180e24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x180e28: 0xac26f1e8  sw          $a2, -0xE18($at)
    ctx->pc = 0x180e28u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x47F1E8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47F1E8u, _value); } while (0);
    // 0x180e2c: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x180e2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x180e30: 0x8423f138  lh          $v1, -0xEC8($at)
    ctx->pc = 0x180e30u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x47F138u));
    // 0x180e34: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x180e34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x180e38: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x180e38u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x180e3c: 0x33900  sll         $a3, $v1, 4
    ctx->pc = 0x180e3cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x180e40: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x180e40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x180e44: 0x33140  sll         $a2, $v1, 5
    ctx->pc = 0x180e44u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x180e48: 0x3c03004a  lui         $v1, 0x4A
    ctx->pc = 0x180e48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)74 << 16));
    // 0x180e4c: 0x24671380  addiu       $a3, $v1, 0x1380
    ctx->pc = 0x180e4cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 4992));
    // 0x180e50: 0xe63021  addu        $a2, $a3, $a2
    ctx->pc = 0x180e50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x180e54: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x180e54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x180e58: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x180e58u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x180e5c: 0xc4c00178  lwc1        $f0, 0x178($a2)
    ctx->pc = 0x180e5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x180e60: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x180e60u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x180e64: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x180e64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x180e68: 0xe420f1e0  swc1        $f0, -0xE20($at)
    ctx->pc = 0x180e68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x47F1E0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47F1E0u, _value); } while (0); }
    // 0x180e6c: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x180e6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x180e70: 0xc421f200  lwc1        $f1, -0xE00($at)
    ctx->pc = 0x180e70u;
    { uint32_t bits = FAST_READ32(0x47F200u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x180e74: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x180e74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x180e78: 0xc420f1f0  lwc1        $f0, -0xE10($at)
    ctx->pc = 0x180e78u;
    { uint32_t bits = FAST_READ32(0x47F1F0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x180e7c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x180e7cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x180e80: 0x3c064040  lui         $a2, 0x4040
    ctx->pc = 0x180e80u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16448 << 16));
    // 0x180e84: 0x44866000  mtc1        $a2, $f12
    ctx->pc = 0x180e84u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x180e88: 0x0  nop
    ctx->pc = 0x180e88u;
    // NOP
    // 0x180e8c: 0x460c0343  div.s       $f13, $f0, $f12
    ctx->pc = 0x180e8cu;
    { if (ctx->f[12] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[13] = FPU_DIV_S(ctx->f[0], ctx->f[12]); }
    // 0x180e90: 0x0  nop
    ctx->pc = 0x180e90u;
    // NOP
    // 0x180e94: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x180e94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x180e98: 0xe42df1d8  swc1        $f13, -0xE28($at)
    ctx->pc = 0x180e98u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x47F1D8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47F1D8u, _value); } while (0); }
    // 0x180e9c: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x180E9Cu;
    {
        const bool branch_taken_0x180e9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x180e9c) {
            ctx->pc = 0x180F1Cu;
            goto label_180f1c;
        }
    }
    ctx->pc = 0x180EA4u;
label_180ea4:
    // 0x180ea4: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x180ea4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x180ea8: 0xac20f1e8  sw          $zero, -0xE18($at)
    ctx->pc = 0x180ea8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x47F1E8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47F1E8u, _value); } while (0);
    // 0x180eac: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x180eacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x180eb0: 0x8423f138  lh          $v1, -0xEC8($at)
    ctx->pc = 0x180eb0u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x47F138u));
    // 0x180eb4: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x180eb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x180eb8: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x180eb8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x180ebc: 0x33900  sll         $a3, $v1, 4
    ctx->pc = 0x180ebcu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x180ec0: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x180ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x180ec4: 0x33140  sll         $a2, $v1, 5
    ctx->pc = 0x180ec4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x180ec8: 0x3c07004a  lui         $a3, 0x4A
    ctx->pc = 0x180ec8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)74 << 16));
    // 0x180ecc: 0x24e31380  addiu       $v1, $a3, 0x1380
    ctx->pc = 0x180eccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4992));
    // 0x180ed0: 0x663021  addu        $a2, $v1, $a2
    ctx->pc = 0x180ed0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x180ed4: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x180ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x180ed8: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x180ed8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x180edc: 0xc4c00178  lwc1        $f0, 0x178($a2)
    ctx->pc = 0x180edcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x180ee0: 0x46007042  mul.s       $f1, $f14, $f0
    ctx->pc = 0x180ee0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[14], ctx->f[0]);
    // 0x180ee4: 0x46000807  neg.s       $f0, $f1
    ctx->pc = 0x180ee4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[1]);
    // 0x180ee8: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x180ee8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x180eec: 0xe420f1e0  swc1        $f0, -0xE20($at)
    ctx->pc = 0x180eecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x47F1E0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47F1E0u, _value); } while (0); }
    // 0x180ef0: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x180ef0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x180ef4: 0xc421f1f0  lwc1        $f1, -0xE10($at)
    ctx->pc = 0x180ef4u;
    { uint32_t bits = FAST_READ32(0x47F1F0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x180ef8: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x180ef8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x180efc: 0xc420f200  lwc1        $f0, -0xE00($at)
    ctx->pc = 0x180efcu;
    { uint32_t bits = FAST_READ32(0x47F200u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x180f00: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x180f00u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x180f04: 0x3c064040  lui         $a2, 0x4040
    ctx->pc = 0x180f04u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16448 << 16));
    // 0x180f08: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x180f08u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x180f0c: 0x0  nop
    ctx->pc = 0x180f0cu;
    // NOP
    // 0x180f10: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x180f10u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x180f14: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x180f14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x180f18: 0xe420f1d8  swc1        $f0, -0xE28($at)
    ctx->pc = 0x180f18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x47F1D8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47F1D8u, _value); } while (0); }
label_180f1c:
    // 0x180f1c: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x180f1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x180f20: 0xc421f1e0  lwc1        $f1, -0xE20($at)
    ctx->pc = 0x180f20u;
    { uint32_t bits = FAST_READ32(0x47F1E0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x180f24: 0xe7a1002c  swc1        $f1, 0x2C($sp)
    ctx->pc = 0x180f24u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x180f28: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x180f28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x180f2c: 0x8423f138  lh          $v1, -0xEC8($at)
    ctx->pc = 0x180f2cu;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x47F138u));
    // 0x180f30: 0x3343c  dsll32      $a2, $v1, 16
    ctx->pc = 0x180f30u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 16));
    // 0x180f34: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x180f34u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x180f38: 0x61900  sll         $v1, $a2, 4
    ctx->pc = 0x180f38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x180f3c: 0x663821  addu        $a3, $v1, $a2
    ctx->pc = 0x180f3cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x180f40: 0x73140  sll         $a2, $a3, 5
    ctx->pc = 0x180f40u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 5));
    // 0x180f44: 0x3c03004a  lui         $v1, 0x4A
    ctx->pc = 0x180f44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)74 << 16));
    // 0x180f48: 0x24681380  addiu       $t0, $v1, 0x1380
    ctx->pc = 0x180f48u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 4992));
    // 0x180f4c: 0x1063821  addu        $a3, $t0, $a2
    ctx->pc = 0x180f4cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x180f50: 0x8ce60158  lw          $a2, 0x158($a3)
    ctx->pc = 0x180f50u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 344)));
    // 0x180f54: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x180f54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x180f58: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x180f58u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x180f5c: 0xace60158  sw          $a2, 0x158($a3)
    ctx->pc = 0x180f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 344), GPR_U32(ctx, 6));
    // 0x180f60: 0x100001f1  b           . + 4 + (0x1F1 << 2)
    ctx->pc = 0x180F60u;
    {
        const bool branch_taken_0x180f60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x180f60) {
            ctx->pc = 0x181728u;
            goto label_181728;
        }
    }
    ctx->pc = 0x180F68u;
label_180f68:
    // 0x180f68: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x180f68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x180f6c: 0x8423f138  lh          $v1, -0xEC8($at)
    ctx->pc = 0x180f6cu;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x47F138u));
    // 0x180f70: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x180f70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x180f74: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x180f74u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x180f78: 0x33100  sll         $a2, $v1, 4
    ctx->pc = 0x180f78u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x180f7c: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x180f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x180f80: 0x33940  sll         $a3, $v1, 5
    ctx->pc = 0x180f80u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x180f84: 0x3c03004a  lui         $v1, 0x4A
    ctx->pc = 0x180f84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)74 << 16));
    // 0x180f88: 0x24661380  addiu       $a2, $v1, 0x1380
    ctx->pc = 0x180f88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4992));
    // 0x180f8c: 0xc71821  addu        $v1, $a2, $a3
    ctx->pc = 0x180f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x180f90: 0x8c630158  lw          $v1, 0x158($v1)
    ctx->pc = 0x180f90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 344)));
    // 0x180f94: 0x306607ff  andi        $a2, $v1, 0x7FF
    ctx->pc = 0x180f94u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2047);
    // 0x180f98: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x180f98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x180f9c: 0x14c30023  bne         $a2, $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x180F9Cu;
    {
        const bool branch_taken_0x180f9c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        if (branch_taken_0x180f9c) {
            ctx->pc = 0x18102Cu;
            goto label_18102c;
        }
    }
    ctx->pc = 0x180FA4u;
    // 0x180fa4: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x180fa4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x180fa8: 0x8423f138  lh          $v1, -0xEC8($at)
    ctx->pc = 0x180fa8u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x47F138u));
    // 0x180fac: 0x33c3c  dsll32      $a3, $v1, 16
    ctx->pc = 0x180facu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) << (32 + 16));
    // 0x180fb0: 0x73c3f  dsra32      $a3, $a3, 16
    ctx->pc = 0x180fb0u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 16));
    // 0x180fb4: 0x73100  sll         $a2, $a3, 4
    ctx->pc = 0x180fb4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x180fb8: 0xc71821  addu        $v1, $a2, $a3
    ctx->pc = 0x180fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x180fbc: 0x33940  sll         $a3, $v1, 5
    ctx->pc = 0x180fbcu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x180fc0: 0x3c06004a  lui         $a2, 0x4A
    ctx->pc = 0x180fc0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)74 << 16));
    // 0x180fc4: 0x24c31380  addiu       $v1, $a2, 0x1380
    ctx->pc = 0x180fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4992));
    // 0x180fc8: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x180fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x180fcc: 0x260601a0  addiu       $a2, $s0, 0x1A0
    ctx->pc = 0x180fccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 416));
    // 0x180fd0: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x180fd0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x180fd4: 0x70602e28  paddub      $a1, $v1, $zero
    ctx->pc = 0x180fd4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x180fd8: 0xc05ec8c  jal         func_17B230
    ctx->pc = 0x180FD8u;
    SET_GPR_U32(ctx, 31, 0x180FE0u);
    ctx->pc = 0x17B230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17B230u, 0x180FD8u, 0x180FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180FE0u;
label_180fe0:
    // 0x180fe0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x180fe0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x180fe4: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x180fe4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x180fe8: 0x8426f138  lh          $a2, -0xEC8($at)
    ctx->pc = 0x180fe8u;
    SET_GPR_S32(ctx, 6, (int16_t)FAST_READ16(0x47F138u));
    // 0x180fec: 0x61c3c  dsll32      $v1, $a2, 16
    ctx->pc = 0x180fecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << (32 + 16));
    // 0x180ff0: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x180ff0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x180ff4: 0x33100  sll         $a2, $v1, 4
    ctx->pc = 0x180ff4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x180ff8: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x180ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x180ffc: 0x33940  sll         $a3, $v1, 5
    ctx->pc = 0x180ffcu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x181000: 0x3c06004a  lui         $a2, 0x4A
    ctx->pc = 0x181000u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)74 << 16));
    // 0x181004: 0x24c31380  addiu       $v1, $a2, 0x1380
    ctx->pc = 0x181004u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4992));
    // 0x181008: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x181008u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x18100c: 0x24670090  addiu       $a3, $v1, 0x90
    ctx->pc = 0x18100cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 144));
    // 0x181010: 0x78e30000  lq          $v1, 0x0($a3)
    ctx->pc = 0x181010u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x181014: 0x26060190  addiu       $a2, $s0, 0x190
    ctx->pc = 0x181014u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 400));
    // 0x181018: 0x7cc30000  sq          $v1, 0x0($a2)
    ctx->pc = 0x181018u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 3));
    // 0x18101c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x18101cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x181020: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x181020u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x181024: 0x0  nop
    ctx->pc = 0x181024u;
    // NOP
    // 0x181028: 0xe600019c  swc1        $f0, 0x19C($s0)
    ctx->pc = 0x181028u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 412), bits); }
label_18102c:
    // 0x18102c: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x18102cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x181030: 0x8423f138  lh          $v1, -0xEC8($at)
    ctx->pc = 0x181030u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x47F138u));
    // 0x181034: 0x3343c  dsll32      $a2, $v1, 16
    ctx->pc = 0x181034u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 16));
    // 0x181038: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x181038u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x18103c: 0x61900  sll         $v1, $a2, 4
    ctx->pc = 0x18103cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x181040: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x181040u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x181044: 0x33140  sll         $a2, $v1, 5
    ctx->pc = 0x181044u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x181048: 0x3c03004a  lui         $v1, 0x4A
    ctx->pc = 0x181048u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)74 << 16));
    // 0x18104c: 0x24631380  addiu       $v1, $v1, 0x1380
    ctx->pc = 0x18104cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4992));
    // 0x181050: 0x663021  addu        $a2, $v1, $a2
    ctx->pc = 0x181050u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x181054: 0xc4c00170  lwc1        $f0, 0x170($a2)
    ctx->pc = 0x181054u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x181058: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x181058u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x18105c: 0xe420f1f0  swc1        $f0, -0xE10($at)
    ctx->pc = 0x18105cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x47F1F0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47F1F0u, _value); } while (0); }
    // 0x181060: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x181060u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x181064: 0x8423f138  lh          $v1, -0xEC8($at)
    ctx->pc = 0x181064u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x47F138u));
    // 0x181068: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x181068u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x18106c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x18106cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x181070: 0x33100  sll         $a2, $v1, 4
    ctx->pc = 0x181070u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x181074: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x181074u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x181078: 0x33940  sll         $a3, $v1, 5
    ctx->pc = 0x181078u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x18107c: 0x3c03004a  lui         $v1, 0x4A
    ctx->pc = 0x18107cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)74 << 16));
    // 0x181080: 0x24661380  addiu       $a2, $v1, 0x1380
    ctx->pc = 0x181080u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4992));
    // 0x181084: 0xc71821  addu        $v1, $a2, $a3
    ctx->pc = 0x181084u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x181088: 0xc4600170  lwc1        $f0, 0x170($v1)
    ctx->pc = 0x181088u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18108c: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x18108cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x181090: 0xe420f1f8  swc1        $f0, -0xE08($at)
    ctx->pc = 0x181090u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x47F1F8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47F1F8u, _value); } while (0); }
    // 0x181094: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x181094u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x181098: 0x8423f138  lh          $v1, -0xEC8($at)
    ctx->pc = 0x181098u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x47F138u));
    // 0x18109c: 0x3343c  dsll32      $a2, $v1, 16
    ctx->pc = 0x18109cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1810a0: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x1810a0u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x1810a4: 0x61900  sll         $v1, $a2, 4
    ctx->pc = 0x1810a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x1810a8: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x1810a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1810ac: 0x33140  sll         $a2, $v1, 5
    ctx->pc = 0x1810acu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x1810b0: 0x3c03004a  lui         $v1, 0x4A
    ctx->pc = 0x1810b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)74 << 16));
    // 0x1810b4: 0x24631380  addiu       $v1, $v1, 0x1380
    ctx->pc = 0x1810b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4992));
    // 0x1810b8: 0x663021  addu        $a2, $v1, $a2
    ctx->pc = 0x1810b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1810bc: 0xc4c00170  lwc1        $f0, 0x170($a2)
    ctx->pc = 0x1810bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1810c0: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1810c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1810c4: 0xe420f200  swc1        $f0, -0xE00($at)
    ctx->pc = 0x1810c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x47F200u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47F200u, _value); } while (0); }
    // 0x1810c8: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1810c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1810cc: 0xc420f1f0  lwc1        $f0, -0xE10($at)
    ctx->pc = 0x1810ccu;
    { uint32_t bits = FAST_READ32(0x47F1F0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1810d0: 0xe60001b0  swc1        $f0, 0x1B0($s0)
    ctx->pc = 0x1810d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 432), bits); }
    // 0x1810d4: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1810d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1810d8: 0xac20f1e8  sw          $zero, -0xE18($at)
    ctx->pc = 0x1810d8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x47F1E8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47F1E8u, _value); } while (0);
    // 0x1810dc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1810dcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1810e0: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1810e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1810e4: 0xe420f1e0  swc1        $f0, -0xE20($at)
    ctx->pc = 0x1810e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x47F1E0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47F1E0u, _value); } while (0); }
    // 0x1810e8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1810e8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1810ec: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1810ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1810f0: 0xe420f1d8  swc1        $f0, -0xE28($at)
    ctx->pc = 0x1810f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x47F1D8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47F1D8u, _value); } while (0); }
    // 0x1810f4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1810f4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1810f8: 0x0  nop
    ctx->pc = 0x1810f8u;
    // NOP
    // 0x1810fc: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x1810fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x181100: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x181100u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x181104: 0x8423f138  lh          $v1, -0xEC8($at)
    ctx->pc = 0x181104u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x47F138u));
    // 0x181108: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x181108u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x18110c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x18110cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x181110: 0x33100  sll         $a2, $v1, 4
    ctx->pc = 0x181110u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x181114: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x181114u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x181118: 0x33940  sll         $a3, $v1, 5
    ctx->pc = 0x181118u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x18111c: 0x3c03004a  lui         $v1, 0x4A
    ctx->pc = 0x18111cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)74 << 16));
    // 0x181120: 0x24661380  addiu       $a2, $v1, 0x1380
    ctx->pc = 0x181120u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4992));
    // 0x181124: 0xc73821  addu        $a3, $a2, $a3
    ctx->pc = 0x181124u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x181128: 0x8ce30158  lw          $v1, 0x158($a3)
    ctx->pc = 0x181128u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 344)));
    // 0x18112c: 0x3c062000  lui         $a2, 0x2000
    ctx->pc = 0x18112cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8192 << 16));
    // 0x181130: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x181130u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x181134: 0xace30158  sw          $v1, 0x158($a3)
    ctx->pc = 0x181134u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 344), GPR_U32(ctx, 3));
    // 0x181138: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x181138u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18113c: 0x8fa70058  lw          $a3, 0x58($sp)
    ctx->pc = 0x18113cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x181140: 0xace30088  sw          $v1, 0x88($a3)
    ctx->pc = 0x181140u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 136), GPR_U32(ctx, 3));
    // 0x181144: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x181144u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x181148: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x181148u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x18114c: 0xac660094  sw          $a2, 0x94($v1)
    ctx->pc = 0x18114cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 148), GPR_U32(ctx, 6));
    // 0x181150: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x181150u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x181154: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x181154u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x181158: 0xac6600b8  sw          $a2, 0xB8($v1)
    ctx->pc = 0x181158u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 184), GPR_U32(ctx, 6));
    // 0x18115c: 0x10000172  b           . + 4 + (0x172 << 2)
    ctx->pc = 0x18115Cu;
    {
        const bool branch_taken_0x18115c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18115c) {
            ctx->pc = 0x181728u;
            goto label_181728;
        }
    }
    ctx->pc = 0x181164u;
label_181164:
    // 0x181164: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x181164u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x181168: 0x8423f138  lh          $v1, -0xEC8($at)
    ctx->pc = 0x181168u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x47F138u));
    // 0x18116c: 0x3343c  dsll32      $a2, $v1, 16
    ctx->pc = 0x18116cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 16));
    // 0x181170: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x181170u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x181174: 0x61900  sll         $v1, $a2, 4
    ctx->pc = 0x181174u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x181178: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x181178u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x18117c: 0x33140  sll         $a2, $v1, 5
    ctx->pc = 0x18117cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x181180: 0x3c03004a  lui         $v1, 0x4A
    ctx->pc = 0x181180u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)74 << 16));
    // 0x181184: 0x24631380  addiu       $v1, $v1, 0x1380
    ctx->pc = 0x181184u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4992));
    // 0x181188: 0x663021  addu        $a2, $v1, $a2
    ctx->pc = 0x181188u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x18118c: 0x8cc30158  lw          $v1, 0x158($a2)
    ctx->pc = 0x18118cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 344)));
    // 0x181190: 0x306307ff  andi        $v1, $v1, 0x7FF
    ctx->pc = 0x181190u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2047);
    // 0x181194: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x181194u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x181198: 0x14660023  bne         $v1, $a2, . + 4 + (0x23 << 2)
    ctx->pc = 0x181198u;
    {
        const bool branch_taken_0x181198 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        if (branch_taken_0x181198) {
            ctx->pc = 0x181228u;
            goto label_181228;
        }
    }
    ctx->pc = 0x1811A0u;
    // 0x1811a0: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1811a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1811a4: 0x8423f138  lh          $v1, -0xEC8($at)
    ctx->pc = 0x1811a4u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x47F138u));
    // 0x1811a8: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x1811a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1811ac: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x1811acu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x1811b0: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x1811b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x1811b4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1811b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1811b8: 0x32140  sll         $a0, $v1, 5
    ctx->pc = 0x1811b8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x1811bc: 0x3c03004a  lui         $v1, 0x4A
    ctx->pc = 0x1811bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)74 << 16));
    // 0x1811c0: 0x24631380  addiu       $v1, $v1, 0x1380
    ctx->pc = 0x1811c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4992));
    // 0x1811c4: 0x643021  addu        $a2, $v1, $a0
    ctx->pc = 0x1811c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1811c8: 0x260301a0  addiu       $v1, $s0, 0x1A0
    ctx->pc = 0x1811c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 416));
    // 0x1811cc: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x1811ccu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x1811d0: 0x70c02e28  paddub      $a1, $a2, $zero
    ctx->pc = 0x1811d0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x1811d4: 0xc05ec8c  jal         func_17B230
    ctx->pc = 0x1811D4u;
    SET_GPR_U32(ctx, 31, 0x1811DCu);
    ctx->pc = 0x17B230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17B230u, 0x1811D4u, 0x1811DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1811DCu;
label_1811dc:
    // 0x1811dc: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1811dcu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1811e0: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1811e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1811e4: 0x8427f138  lh          $a3, -0xEC8($at)
    ctx->pc = 0x1811e4u;
    SET_GPR_S32(ctx, 7, (int16_t)FAST_READ16(0x47F138u));
    // 0x1811e8: 0x7343c  dsll32      $a2, $a3, 16
    ctx->pc = 0x1811e8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) << (32 + 16));
    // 0x1811ec: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x1811ecu;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x1811f0: 0x61900  sll         $v1, $a2, 4
    ctx->pc = 0x1811f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x1811f4: 0x663821  addu        $a3, $v1, $a2
    ctx->pc = 0x1811f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1811f8: 0x73140  sll         $a2, $a3, 5
    ctx->pc = 0x1811f8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 5));
    // 0x1811fc: 0x3c03004a  lui         $v1, 0x4A
    ctx->pc = 0x1811fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)74 << 16));
    // 0x181200: 0x24631380  addiu       $v1, $v1, 0x1380
    ctx->pc = 0x181200u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4992));
    // 0x181204: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x181204u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x181208: 0x24630090  addiu       $v1, $v1, 0x90
    ctx->pc = 0x181208u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 144));
    // 0x18120c: 0x78660000  lq          $a2, 0x0($v1)
    ctx->pc = 0x18120cu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x181210: 0x26030190  addiu       $v1, $s0, 0x190
    ctx->pc = 0x181210u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 400));
    // 0x181214: 0x7c660000  sq          $a2, 0x0($v1)
    ctx->pc = 0x181214u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 6));
    // 0x181218: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x181218u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x18121c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x18121cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x181220: 0x0  nop
    ctx->pc = 0x181220u;
    // NOP
    // 0x181224: 0xe600019c  swc1        $f0, 0x19C($s0)
    ctx->pc = 0x181224u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 412), bits); }
label_181228:
    // 0x181228: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x181228u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x18122c: 0x8423f138  lh          $v1, -0xEC8($at)
    ctx->pc = 0x18122cu;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x47F138u));
    // 0x181230: 0x3343c  dsll32      $a2, $v1, 16
    ctx->pc = 0x181230u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 16));
    // 0x181234: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x181234u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x181238: 0x61900  sll         $v1, $a2, 4
    ctx->pc = 0x181238u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x18123c: 0x663021  addu        $a2, $v1, $a2
    ctx->pc = 0x18123cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x181240: 0x63940  sll         $a3, $a2, 5
    ctx->pc = 0x181240u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
    // 0x181244: 0x3c03004a  lui         $v1, 0x4A
    ctx->pc = 0x181244u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)74 << 16));
    // 0x181248: 0x24661380  addiu       $a2, $v1, 0x1380
    ctx->pc = 0x181248u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4992));
    // 0x18124c: 0xc71821  addu        $v1, $a2, $a3
    ctx->pc = 0x18124cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x181250: 0xc4600180  lwc1        $f0, 0x180($v1)
    ctx->pc = 0x181250u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x181254: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x181254u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x181258: 0xe420f1f0  swc1        $f0, -0xE10($at)
    ctx->pc = 0x181258u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x47F1F0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47F1F0u, _value); } while (0); }
    // 0x18125c: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x18125cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x181260: 0x8423f138  lh          $v1, -0xEC8($at)
    ctx->pc = 0x181260u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x47F138u));
    // 0x181264: 0x3343c  dsll32      $a2, $v1, 16
    ctx->pc = 0x181264u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 16));
    // 0x181268: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x181268u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x18126c: 0x61900  sll         $v1, $a2, 4
    ctx->pc = 0x18126cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x181270: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x181270u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x181274: 0x33940  sll         $a3, $v1, 5
    ctx->pc = 0x181274u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x181278: 0x3c03004a  lui         $v1, 0x4A
    ctx->pc = 0x181278u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)74 << 16));
    // 0x18127c: 0x24661380  addiu       $a2, $v1, 0x1380
    ctx->pc = 0x18127cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4992));
    // 0x181280: 0xc73821  addu        $a3, $a2, $a3
    ctx->pc = 0x181280u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x181284: 0xc4e00174  lwc1        $f0, 0x174($a3)
    ctx->pc = 0x181284u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 372)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x181288: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x181288u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x18128c: 0xe420f1f8  swc1        $f0, -0xE08($at)
    ctx->pc = 0x18128cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x47F1F8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47F1F8u, _value); } while (0); }
    // 0x181290: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x181290u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x181294: 0x8423f138  lh          $v1, -0xEC8($at)
    ctx->pc = 0x181294u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x47F138u));
    // 0x181298: 0x3343c  dsll32      $a2, $v1, 16
    ctx->pc = 0x181298u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 16));
    // 0x18129c: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x18129cu;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x1812a0: 0x61900  sll         $v1, $a2, 4
    ctx->pc = 0x1812a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x1812a4: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x1812a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1812a8: 0x33140  sll         $a2, $v1, 5
    ctx->pc = 0x1812a8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x1812ac: 0x3c03004a  lui         $v1, 0x4A
    ctx->pc = 0x1812acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)74 << 16));
    // 0x1812b0: 0x24631380  addiu       $v1, $v1, 0x1380
    ctx->pc = 0x1812b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4992));
    // 0x1812b4: 0x663021  addu        $a2, $v1, $a2
    ctx->pc = 0x1812b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1812b8: 0xc4c00170  lwc1        $f0, 0x170($a2)
    ctx->pc = 0x1812b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1812bc: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1812bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1812c0: 0xe420f200  swc1        $f0, -0xE00($at)
    ctx->pc = 0x1812c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x47F200u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47F200u, _value); } while (0); }
    // 0x1812c4: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1812c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1812c8: 0xc420f1f0  lwc1        $f0, -0xE10($at)
    ctx->pc = 0x1812c8u;
    { uint32_t bits = FAST_READ32(0x47F1F0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1812cc: 0xe60001b0  swc1        $f0, 0x1B0($s0)
    ctx->pc = 0x1812ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 432), bits); }
    // 0x1812d0: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1812d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1812d4: 0xc421f1f8  lwc1        $f1, -0xE08($at)
    ctx->pc = 0x1812d4u;
    { uint32_t bits = FAST_READ32(0x47F1F8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1812d8: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1812d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1812dc: 0xc420f1f0  lwc1        $f0, -0xE10($at)
    ctx->pc = 0x1812dcu;
    { uint32_t bits = FAST_READ32(0x47F1F0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1812e0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1812e0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1812e4: 0x0  nop
    ctx->pc = 0x1812e4u;
    // NOP
    // 0x1812e8: 0x45010022  bc1t        . + 4 + (0x22 << 2)
    ctx->pc = 0x1812E8u;
    {
        const bool branch_taken_0x1812e8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1812e8) {
            ctx->pc = 0x181374u;
            goto label_181374;
        }
    }
    ctx->pc = 0x1812F0u;
    // 0x1812f0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1812f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1812f4: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1812f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1812f8: 0xac23f1e8  sw          $v1, -0xE18($at)
    ctx->pc = 0x1812f8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x47F1E8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47F1E8u, _value); } while (0);
    // 0x1812fc: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1812fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x181300: 0x8423f138  lh          $v1, -0xEC8($at)
    ctx->pc = 0x181300u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x47F138u));
    // 0x181304: 0x3343c  dsll32      $a2, $v1, 16
    ctx->pc = 0x181304u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 16));
    // 0x181308: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x181308u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x18130c: 0x61900  sll         $v1, $a2, 4
    ctx->pc = 0x18130cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x181310: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x181310u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x181314: 0x33940  sll         $a3, $v1, 5
    ctx->pc = 0x181314u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x181318: 0x3c03004a  lui         $v1, 0x4A
    ctx->pc = 0x181318u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)74 << 16));
    // 0x18131c: 0x24661380  addiu       $a2, $v1, 0x1380
    ctx->pc = 0x18131cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4992));
    // 0x181320: 0xc71821  addu        $v1, $a2, $a3
    ctx->pc = 0x181320u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x181324: 0x3c083f00  lui         $t0, 0x3F00
    ctx->pc = 0x181324u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16128 << 16));
    // 0x181328: 0x44880800  mtc1        $t0, $f1
    ctx->pc = 0x181328u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x18132c: 0xc4600178  lwc1        $f0, 0x178($v1)
    ctx->pc = 0x18132cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x181330: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x181330u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x181334: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x181334u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x181338: 0xe420f1e0  swc1        $f0, -0xE20($at)
    ctx->pc = 0x181338u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x47F1E0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47F1E0u, _value); } while (0); }
    // 0x18133c: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x18133cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x181340: 0xc421f1f8  lwc1        $f1, -0xE08($at)
    ctx->pc = 0x181340u;
    { uint32_t bits = FAST_READ32(0x47F1F8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x181344: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x181344u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x181348: 0xc420f1f0  lwc1        $f0, -0xE10($at)
    ctx->pc = 0x181348u;
    { uint32_t bits = FAST_READ32(0x47F1F0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18134c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x18134cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x181350: 0x3c074040  lui         $a3, 0x4040
    ctx->pc = 0x181350u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16448 << 16));
    // 0x181354: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x181354u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x181358: 0x0  nop
    ctx->pc = 0x181358u;
    // NOP
    // 0x18135c: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x18135cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x181360: 0x0  nop
    ctx->pc = 0x181360u;
    // NOP
    // 0x181364: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x181364u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x181368: 0xe420f1d8  swc1        $f0, -0xE28($at)
    ctx->pc = 0x181368u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x47F1D8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47F1D8u, _value); } while (0); }
    // 0x18136c: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x18136Cu;
    {
        const bool branch_taken_0x18136c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18136c) {
            ctx->pc = 0x1813ECu;
            goto label_1813ec;
        }
    }
    ctx->pc = 0x181374u;
label_181374:
    // 0x181374: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x181374u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x181378: 0xac20f1e8  sw          $zero, -0xE18($at)
    ctx->pc = 0x181378u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x47F1E8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47F1E8u, _value); } while (0);
    // 0x18137c: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x18137cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x181380: 0x8423f138  lh          $v1, -0xEC8($at)
    ctx->pc = 0x181380u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x47F138u));
    // 0x181384: 0x3343c  dsll32      $a2, $v1, 16
    ctx->pc = 0x181384u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 16));
    // 0x181388: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x181388u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x18138c: 0x61900  sll         $v1, $a2, 4
    ctx->pc = 0x18138cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x181390: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x181390u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x181394: 0x33140  sll         $a2, $v1, 5
    ctx->pc = 0x181394u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x181398: 0x3c03004a  lui         $v1, 0x4A
    ctx->pc = 0x181398u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)74 << 16));
    // 0x18139c: 0x24671380  addiu       $a3, $v1, 0x1380
    ctx->pc = 0x18139cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 4992));
    // 0x1813a0: 0xe63021  addu        $a2, $a3, $a2
    ctx->pc = 0x1813a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x1813a4: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x1813a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x1813a8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1813a8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1813ac: 0xc4c00178  lwc1        $f0, 0x178($a2)
    ctx->pc = 0x1813acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1813b0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1813b0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1813b4: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1813b4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1813b8: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1813b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1813bc: 0xe420f1e0  swc1        $f0, -0xE20($at)
    ctx->pc = 0x1813bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x47F1E0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47F1E0u, _value); } while (0); }
    // 0x1813c0: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1813c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1813c4: 0xc421f1f0  lwc1        $f1, -0xE10($at)
    ctx->pc = 0x1813c4u;
    { uint32_t bits = FAST_READ32(0x47F1F0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1813c8: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1813c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1813cc: 0xc420f1f8  lwc1        $f0, -0xE08($at)
    ctx->pc = 0x1813ccu;
    { uint32_t bits = FAST_READ32(0x47F1F8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1813d0: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1813d0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1813d4: 0x3c074040  lui         $a3, 0x4040
    ctx->pc = 0x1813d4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16448 << 16));
    // 0x1813d8: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x1813d8u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1813dc: 0x0  nop
    ctx->pc = 0x1813dcu;
    // NOP
    // 0x1813e0: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1813e0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1813e4: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1813e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1813e8: 0xe420f1d8  swc1        $f0, -0xE28($at)
    ctx->pc = 0x1813e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x47F1D8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47F1D8u, _value); } while (0); }
label_1813ec:
    // 0x1813ec: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1813ecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1813f0: 0x0  nop
    ctx->pc = 0x1813f0u;
    // NOP
    // 0x1813f4: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x1813f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x1813f8: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1813f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1813fc: 0x8423f138  lh          $v1, -0xEC8($at)
    ctx->pc = 0x1813fcu;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x47F138u));
    // 0x181400: 0x3343c  dsll32      $a2, $v1, 16
    ctx->pc = 0x181400u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 16));
    // 0x181404: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x181404u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x181408: 0x61900  sll         $v1, $a2, 4
    ctx->pc = 0x181408u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x18140c: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x18140cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x181410: 0x33140  sll         $a2, $v1, 5
    ctx->pc = 0x181410u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x181414: 0x3c03004a  lui         $v1, 0x4A
    ctx->pc = 0x181414u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)74 << 16));
    // 0x181418: 0x24631380  addiu       $v1, $v1, 0x1380
    ctx->pc = 0x181418u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4992));
    // 0x18141c: 0x663821  addu        $a3, $v1, $a2
    ctx->pc = 0x18141cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x181420: 0x8ce60158  lw          $a2, 0x158($a3)
    ctx->pc = 0x181420u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 344)));
    // 0x181424: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x181424u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x181428: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x181428u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x18142c: 0xace60158  sw          $a2, 0x158($a3)
    ctx->pc = 0x18142cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 344), GPR_U32(ctx, 6));
    // 0x181430: 0x100000bd  b           . + 4 + (0xBD << 2)
    ctx->pc = 0x181430u;
    {
        const bool branch_taken_0x181430 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x181430) {
            ctx->pc = 0x181728u;
            goto label_181728;
        }
    }
    ctx->pc = 0x181438u;
label_181438:
    // 0x181438: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x181438u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x18143c: 0x8423f138  lh          $v1, -0xEC8($at)
    ctx->pc = 0x18143cu;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x47F138u));
    // 0x181440: 0x3343c  dsll32      $a2, $v1, 16
    ctx->pc = 0x181440u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 16));
    // 0x181444: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x181444u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x181448: 0x61900  sll         $v1, $a2, 4
    ctx->pc = 0x181448u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x18144c: 0x663021  addu        $a2, $v1, $a2
    ctx->pc = 0x18144cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x181450: 0x63940  sll         $a3, $a2, 5
    ctx->pc = 0x181450u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
    // 0x181454: 0x3c03004a  lui         $v1, 0x4A
    ctx->pc = 0x181454u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)74 << 16));
    // 0x181458: 0x24661380  addiu       $a2, $v1, 0x1380
    ctx->pc = 0x181458u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4992));
    // 0x18145c: 0xc71821  addu        $v1, $a2, $a3
    ctx->pc = 0x18145cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x181460: 0x8c630158  lw          $v1, 0x158($v1)
    ctx->pc = 0x181460u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 344)));
    // 0x181464: 0x306607ff  andi        $a2, $v1, 0x7FF
    ctx->pc = 0x181464u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2047);
    // 0x181468: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x181468u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x18146c: 0x14c30023  bne         $a2, $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x18146Cu;
    {
        const bool branch_taken_0x18146c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        if (branch_taken_0x18146c) {
            ctx->pc = 0x1814FCu;
            goto label_1814fc;
        }
    }
    ctx->pc = 0x181474u;
    // 0x181474: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x181474u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x181478: 0x8426f138  lh          $a2, -0xEC8($at)
    ctx->pc = 0x181478u;
    SET_GPR_S32(ctx, 6, (int16_t)FAST_READ16(0x47F138u));
    // 0x18147c: 0x61c3c  dsll32      $v1, $a2, 16
    ctx->pc = 0x18147cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << (32 + 16));
    // 0x181480: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x181480u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x181484: 0x33900  sll         $a3, $v1, 4
    ctx->pc = 0x181484u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x181488: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x181488u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x18148c: 0x33140  sll         $a2, $v1, 5
    ctx->pc = 0x18148cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x181490: 0x3c07004a  lui         $a3, 0x4A
    ctx->pc = 0x181490u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)74 << 16));
    // 0x181494: 0x24e31380  addiu       $v1, $a3, 0x1380
    ctx->pc = 0x181494u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4992));
    // 0x181498: 0x663021  addu        $a2, $v1, $a2
    ctx->pc = 0x181498u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x18149c: 0x260301a0  addiu       $v1, $s0, 0x1A0
    ctx->pc = 0x18149cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 416));
    // 0x1814a0: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x1814a0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x1814a4: 0x70c02e28  paddub      $a1, $a2, $zero
    ctx->pc = 0x1814a4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x1814a8: 0xc05ec8c  jal         func_17B230
    ctx->pc = 0x1814A8u;
    SET_GPR_U32(ctx, 31, 0x1814B0u);
    ctx->pc = 0x17B230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17B230u, 0x1814A8u, 0x1814B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1814B0u;
label_1814b0:
    // 0x1814b0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1814b0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1814b4: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1814b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1814b8: 0x8423f138  lh          $v1, -0xEC8($at)
    ctx->pc = 0x1814b8u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x47F138u));
    // 0x1814bc: 0x3343c  dsll32      $a2, $v1, 16
    ctx->pc = 0x1814bcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1814c0: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x1814c0u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x1814c4: 0x61900  sll         $v1, $a2, 4
    ctx->pc = 0x1814c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x1814c8: 0x663021  addu        $a2, $v1, $a2
    ctx->pc = 0x1814c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1814cc: 0x61940  sll         $v1, $a2, 5
    ctx->pc = 0x1814ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
    // 0x1814d0: 0x3c07004a  lui         $a3, 0x4A
    ctx->pc = 0x1814d0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)74 << 16));
    // 0x1814d4: 0x24e61380  addiu       $a2, $a3, 0x1380
    ctx->pc = 0x1814d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 4992));
    // 0x1814d8: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x1814d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1814dc: 0x24630090  addiu       $v1, $v1, 0x90
    ctx->pc = 0x1814dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 144));
    // 0x1814e0: 0x78660000  lq          $a2, 0x0($v1)
    ctx->pc = 0x1814e0u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1814e4: 0x26030190  addiu       $v1, $s0, 0x190
    ctx->pc = 0x1814e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 400));
    // 0x1814e8: 0x7c660000  sq          $a2, 0x0($v1)
    ctx->pc = 0x1814e8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 6));
    // 0x1814ec: 0x3c063f80  lui         $a2, 0x3F80
    ctx->pc = 0x1814ecu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16256 << 16));
    // 0x1814f0: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x1814f0u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1814f4: 0x0  nop
    ctx->pc = 0x1814f4u;
    // NOP
    // 0x1814f8: 0xe600019c  swc1        $f0, 0x19C($s0)
    ctx->pc = 0x1814f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 412), bits); }
label_1814fc:
    // 0x1814fc: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1814fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x181500: 0x8423f138  lh          $v1, -0xEC8($at)
    ctx->pc = 0x181500u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x47F138u));
    // 0x181504: 0x3343c  dsll32      $a2, $v1, 16
    ctx->pc = 0x181504u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 16));
    // 0x181508: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x181508u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x18150c: 0x61900  sll         $v1, $a2, 4
    ctx->pc = 0x18150cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x181510: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x181510u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x181514: 0x33940  sll         $a3, $v1, 5
    ctx->pc = 0x181514u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x181518: 0x3c06004a  lui         $a2, 0x4A
    ctx->pc = 0x181518u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)74 << 16));
    // 0x18151c: 0x24c31380  addiu       $v1, $a2, 0x1380
    ctx->pc = 0x18151cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4992));
    // 0x181520: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x181520u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x181524: 0xc4600174  lwc1        $f0, 0x174($v1)
    ctx->pc = 0x181524u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 372)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x181528: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x181528u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x18152c: 0xe420f1f0  swc1        $f0, -0xE10($at)
    ctx->pc = 0x18152cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x47F1F0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47F1F0u, _value); } while (0); }
    // 0x181530: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x181530u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x181534: 0x8427f138  lh          $a3, -0xEC8($at)
    ctx->pc = 0x181534u;
    SET_GPR_S32(ctx, 7, (int16_t)FAST_READ16(0x47F138u));
    // 0x181538: 0x71c3c  dsll32      $v1, $a3, 16
    ctx->pc = 0x181538u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) << (32 + 16));
    // 0x18153c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x18153cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x181540: 0x33100  sll         $a2, $v1, 4
    ctx->pc = 0x181540u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x181544: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x181544u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x181548: 0x33940  sll         $a3, $v1, 5
    ctx->pc = 0x181548u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x18154c: 0x3c06004a  lui         $a2, 0x4A
    ctx->pc = 0x18154cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)74 << 16));
    // 0x181550: 0x24c31380  addiu       $v1, $a2, 0x1380
    ctx->pc = 0x181550u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4992));
    // 0x181554: 0x673021  addu        $a2, $v1, $a3
    ctx->pc = 0x181554u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x181558: 0xc4c00174  lwc1        $f0, 0x174($a2)
    ctx->pc = 0x181558u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 372)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18155c: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x18155cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x181560: 0xe420f1f8  swc1        $f0, -0xE08($at)
    ctx->pc = 0x181560u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x47F1F8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47F1F8u, _value); } while (0); }
    // 0x181564: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x181564u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x181568: 0x8423f138  lh          $v1, -0xEC8($at)
    ctx->pc = 0x181568u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x47F138u));
    // 0x18156c: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x18156cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x181570: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x181570u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x181574: 0x33900  sll         $a3, $v1, 4
    ctx->pc = 0x181574u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x181578: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x181578u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x18157c: 0x33140  sll         $a2, $v1, 5
    ctx->pc = 0x18157cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x181580: 0x3c07004a  lui         $a3, 0x4A
    ctx->pc = 0x181580u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)74 << 16));
    // 0x181584: 0x24e31380  addiu       $v1, $a3, 0x1380
    ctx->pc = 0x181584u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4992));
    // 0x181588: 0x663021  addu        $a2, $v1, $a2
    ctx->pc = 0x181588u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x18158c: 0xc4c00170  lwc1        $f0, 0x170($a2)
    ctx->pc = 0x18158cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x181590: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x181590u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x181594: 0xe420f200  swc1        $f0, -0xE00($at)
    ctx->pc = 0x181594u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x47F200u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47F200u, _value); } while (0); }
    // 0x181598: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x181598u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x18159c: 0xc420f1f0  lwc1        $f0, -0xE10($at)
    ctx->pc = 0x18159cu;
    { uint32_t bits = FAST_READ32(0x47F1F0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1815a0: 0xe60001b0  swc1        $f0, 0x1B0($s0)
    ctx->pc = 0x1815a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 432), bits); }
    // 0x1815a4: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1815a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1815a8: 0xc421f1f8  lwc1        $f1, -0xE08($at)
    ctx->pc = 0x1815a8u;
    { uint32_t bits = FAST_READ32(0x47F1F8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1815ac: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1815acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1815b0: 0xc420f200  lwc1        $f0, -0xE00($at)
    ctx->pc = 0x1815b0u;
    { uint32_t bits = FAST_READ32(0x47F200u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1815b4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1815b4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1815b8: 0x0  nop
    ctx->pc = 0x1815b8u;
    // NOP
    // 0x1815bc: 0x45000022  bc1f        . + 4 + (0x22 << 2)
    ctx->pc = 0x1815BCu;
    {
        const bool branch_taken_0x1815bc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1815bc) {
            ctx->pc = 0x181648u;
            goto label_181648;
        }
    }
    ctx->pc = 0x1815C4u;
    // 0x1815c4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1815c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1815c8: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1815c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1815cc: 0xac23f1e8  sw          $v1, -0xE18($at)
    ctx->pc = 0x1815ccu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x47F1E8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47F1E8u, _value); } while (0);
    // 0x1815d0: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1815d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1815d4: 0x8426f138  lh          $a2, -0xEC8($at)
    ctx->pc = 0x1815d4u;
    SET_GPR_S32(ctx, 6, (int16_t)FAST_READ16(0x47F138u));
    // 0x1815d8: 0x61c3c  dsll32      $v1, $a2, 16
    ctx->pc = 0x1815d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << (32 + 16));
    // 0x1815dc: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1815dcu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1815e0: 0x33100  sll         $a2, $v1, 4
    ctx->pc = 0x1815e0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1815e4: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x1815e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1815e8: 0x33940  sll         $a3, $v1, 5
    ctx->pc = 0x1815e8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x1815ec: 0x3c06004a  lui         $a2, 0x4A
    ctx->pc = 0x1815ecu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)74 << 16));
    // 0x1815f0: 0x24c31380  addiu       $v1, $a2, 0x1380
    ctx->pc = 0x1815f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4992));
    // 0x1815f4: 0x674021  addu        $t0, $v1, $a3
    ctx->pc = 0x1815f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x1815f8: 0x3c073f00  lui         $a3, 0x3F00
    ctx->pc = 0x1815f8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16128 << 16));
    // 0x1815fc: 0x44870800  mtc1        $a3, $f1
    ctx->pc = 0x1815fcu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x181600: 0xc5000178  lwc1        $f0, 0x178($t0)
    ctx->pc = 0x181600u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x181604: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x181604u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x181608: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x181608u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x18160c: 0xe420f1e0  swc1        $f0, -0xE20($at)
    ctx->pc = 0x18160cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x47F1E0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47F1E0u, _value); } while (0); }
    // 0x181610: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x181610u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x181614: 0xc421f200  lwc1        $f1, -0xE00($at)
    ctx->pc = 0x181614u;
    { uint32_t bits = FAST_READ32(0x47F200u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x181618: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x181618u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x18161c: 0xc420f1f8  lwc1        $f0, -0xE08($at)
    ctx->pc = 0x18161cu;
    { uint32_t bits = FAST_READ32(0x47F1F8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x181620: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x181620u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x181624: 0x3c064040  lui         $a2, 0x4040
    ctx->pc = 0x181624u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16448 << 16));
    // 0x181628: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x181628u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18162c: 0x0  nop
    ctx->pc = 0x18162cu;
    // NOP
    // 0x181630: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x181630u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x181634: 0x0  nop
    ctx->pc = 0x181634u;
    // NOP
    // 0x181638: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x181638u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x18163c: 0xe420f1d8  swc1        $f0, -0xE28($at)
    ctx->pc = 0x18163cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x47F1D8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47F1D8u, _value); } while (0); }
    // 0x181640: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x181640u;
    {
        const bool branch_taken_0x181640 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x181640) {
            ctx->pc = 0x1816C0u;
            goto label_1816c0;
        }
    }
    ctx->pc = 0x181648u;
label_181648:
    // 0x181648: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x181648u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x18164c: 0xac20f1e8  sw          $zero, -0xE18($at)
    ctx->pc = 0x18164cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x47F1E8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47F1E8u, _value); } while (0);
    // 0x181650: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x181650u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x181654: 0x8423f138  lh          $v1, -0xEC8($at)
    ctx->pc = 0x181654u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x47F138u));
    // 0x181658: 0x3343c  dsll32      $a2, $v1, 16
    ctx->pc = 0x181658u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 16));
    // 0x18165c: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x18165cu;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x181660: 0x61900  sll         $v1, $a2, 4
    ctx->pc = 0x181660u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x181664: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x181664u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x181668: 0x33140  sll         $a2, $v1, 5
    ctx->pc = 0x181668u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x18166c: 0x3c03004a  lui         $v1, 0x4A
    ctx->pc = 0x18166cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)74 << 16));
    // 0x181670: 0x24671380  addiu       $a3, $v1, 0x1380
    ctx->pc = 0x181670u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 4992));
    // 0x181674: 0xe61821  addu        $v1, $a3, $a2
    ctx->pc = 0x181674u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x181678: 0x3c063f00  lui         $a2, 0x3F00
    ctx->pc = 0x181678u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16128 << 16));
    // 0x18167c: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x18167cu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x181680: 0xc4600178  lwc1        $f0, 0x178($v1)
    ctx->pc = 0x181680u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x181684: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x181684u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x181688: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x181688u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x18168c: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x18168cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x181690: 0xe420f1e0  swc1        $f0, -0xE20($at)
    ctx->pc = 0x181690u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x47F1E0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47F1E0u, _value); } while (0); }
    // 0x181694: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x181694u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x181698: 0xc421f1f8  lwc1        $f1, -0xE08($at)
    ctx->pc = 0x181698u;
    { uint32_t bits = FAST_READ32(0x47F1F8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18169c: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x18169cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1816a0: 0xc420f200  lwc1        $f0, -0xE00($at)
    ctx->pc = 0x1816a0u;
    { uint32_t bits = FAST_READ32(0x47F200u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1816a4: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1816a4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1816a8: 0x3c034040  lui         $v1, 0x4040
    ctx->pc = 0x1816a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16448 << 16));
    // 0x1816ac: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1816acu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1816b0: 0x0  nop
    ctx->pc = 0x1816b0u;
    // NOP
    // 0x1816b4: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1816b4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1816b8: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1816b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1816bc: 0xe420f1d8  swc1        $f0, -0xE28($at)
    ctx->pc = 0x1816bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x47F1D8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47F1D8u, _value); } while (0); }
label_1816c0:
    // 0x1816c0: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1816c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1816c4: 0x8423f138  lh          $v1, -0xEC8($at)
    ctx->pc = 0x1816c4u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x47F138u));
    // 0x1816c8: 0x3343c  dsll32      $a2, $v1, 16
    ctx->pc = 0x1816c8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1816cc: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x1816ccu;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x1816d0: 0x61900  sll         $v1, $a2, 4
    ctx->pc = 0x1816d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x1816d4: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x1816d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1816d8: 0x33940  sll         $a3, $v1, 5
    ctx->pc = 0x1816d8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x1816dc: 0x3c06004a  lui         $a2, 0x4A
    ctx->pc = 0x1816dcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)74 << 16));
    // 0x1816e0: 0x24c31380  addiu       $v1, $a2, 0x1380
    ctx->pc = 0x1816e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4992));
    // 0x1816e4: 0x673821  addu        $a3, $v1, $a3
    ctx->pc = 0x1816e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x1816e8: 0x8ce60158  lw          $a2, 0x158($a3)
    ctx->pc = 0x1816e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 344)));
    // 0x1816ec: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x1816ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x1816f0: 0xc31825  or          $v1, $a2, $v1
    ctx->pc = 0x1816f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x1816f4: 0xace30158  sw          $v1, 0x158($a3)
    ctx->pc = 0x1816f4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 344), GPR_U32(ctx, 3));
    // 0x1816f8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1816f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1816fc: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1816fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x181700: 0xac26f208  sw          $a2, -0xDF8($at)
    ctx->pc = 0x181700u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x47F208u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47F208u, _value); } while (0);
    // 0x181704: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x181704u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x181708: 0x8fa60058  lw          $a2, 0x58($sp)
    ctx->pc = 0x181708u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x18170c: 0xacc30088  sw          $v1, 0x88($a2)
    ctx->pc = 0x18170cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 136), GPR_U32(ctx, 3));
    // 0x181710: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x181710u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x181714: 0x8fa60058  lw          $a2, 0x58($sp)
    ctx->pc = 0x181714u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x181718: 0xacc30094  sw          $v1, 0x94($a2)
    ctx->pc = 0x181718u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 148), GPR_U32(ctx, 3));
    // 0x18171c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x18171cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x181720: 0x8fa70058  lw          $a3, 0x58($sp)
    ctx->pc = 0x181720u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x181724: 0xace300b8  sw          $v1, 0xB8($a3)
    ctx->pc = 0x181724u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 184), GPR_U32(ctx, 3));
label_181728:
    // 0x181728: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x181728u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x18172c: 0x8c26f220  lw          $a2, -0xDE0($at)
    ctx->pc = 0x18172cu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x47F220u));
    // 0x181730: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x181730u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x181734: 0x10c3016a  beq         $a2, $v1, . + 4 + (0x16A << 2)
    ctx->pc = 0x181734u;
    {
        const bool branch_taken_0x181734 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x181734) {
            ctx->pc = 0x181CE0u;
            goto label_181ce0;
        }
    }
    ctx->pc = 0x18173Cu;
    // 0x18173c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x18173cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x181740: 0x10c300b5  beq         $a2, $v1, . + 4 + (0xB5 << 2)
    ctx->pc = 0x181740u;
    {
        const bool branch_taken_0x181740 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x181740) {
            ctx->pc = 0x181A18u;
            goto label_181a18;
        }
    }
    ctx->pc = 0x181748u;
    // 0x181748: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x181748u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18174c: 0x10c70005  beq         $a2, $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x18174Cu;
    {
        const bool branch_taken_0x18174c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 7));
        if (branch_taken_0x18174c) {
            ctx->pc = 0x181764u;
            goto label_181764;
        }
    }
    ctx->pc = 0x181754u;
    // 0x181754: 0x10c00212  beqz        $a2, . + 4 + (0x212 << 2)
    ctx->pc = 0x181754u;
    {
        const bool branch_taken_0x181754 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x181754) {
            ctx->pc = 0x181FA0u;
            goto label_181fa0;
        }
    }
    ctx->pc = 0x18175Cu;
    // 0x18175c: 0x10000210  b           . + 4 + (0x210 << 2)
    ctx->pc = 0x18175Cu;
    {
        const bool branch_taken_0x18175c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18175c) {
            ctx->pc = 0x181FA0u;
            goto label_181fa0;
        }
    }
    ctx->pc = 0x181764u;
label_181764:
    // 0x181764: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x181764u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x181768: 0x8423f138  lh          $v1, -0xEC8($at)
    ctx->pc = 0x181768u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x47F138u));
    // 0x18176c: 0x3343c  dsll32      $a2, $v1, 16
    ctx->pc = 0x18176cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 16));
    // 0x181770: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x181770u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x181774: 0x61900  sll         $v1, $a2, 4
    ctx->pc = 0x181774u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x181778: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x181778u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x18177c: 0x33140  sll         $a2, $v1, 5
    ctx->pc = 0x18177cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x181780: 0x3c03004a  lui         $v1, 0x4A
    ctx->pc = 0x181780u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)74 << 16));
    // 0x181784: 0x24631380  addiu       $v1, $v1, 0x1380
    ctx->pc = 0x181784u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4992));
    // 0x181788: 0x663021  addu        $a2, $v1, $a2
    ctx->pc = 0x181788u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x18178c: 0x3c0341b2  lui         $v1, 0x41B2
    ctx->pc = 0x18178cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16818 << 16));
    // 0x181790: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x181790u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x181794: 0xc4c00178  lwc1        $f0, 0x178($a2)
    ctx->pc = 0x181794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x181798: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x181798u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x18179c: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x18179cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1817a0: 0xc420f1d8  lwc1        $f0, -0xE28($at)
    ctx->pc = 0x1817a0u;
    { uint32_t bits = FAST_READ32(0x47F1D8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1817a4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1817a4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1817a8: 0x0  nop
    ctx->pc = 0x1817a8u;
    // NOP
    // 0x1817ac: 0x45000092  bc1f        . + 4 + (0x92 << 2)
    ctx->pc = 0x1817ACu;
    {
        const bool branch_taken_0x1817ac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1817ac) {
            ctx->pc = 0x1819F8u;
            goto label_1819f8;
        }
    }
    ctx->pc = 0x1817B4u;
    // 0x1817b4: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1817b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1817b8: 0x8423f138  lh          $v1, -0xEC8($at)
    ctx->pc = 0x1817b8u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x47F138u));
    // 0x1817bc: 0x3343c  dsll32      $a2, $v1, 16
    ctx->pc = 0x1817bcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1817c0: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x1817c0u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x1817c4: 0x61900  sll         $v1, $a2, 4
    ctx->pc = 0x1817c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x1817c8: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x1817c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1817cc: 0x33140  sll         $a2, $v1, 5
    ctx->pc = 0x1817ccu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x1817d0: 0x3c03004a  lui         $v1, 0x4A
    ctx->pc = 0x1817d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)74 << 16));
    // 0x1817d4: 0x24671380  addiu       $a3, $v1, 0x1380
    ctx->pc = 0x1817d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 4992));
    // 0x1817d8: 0xe61821  addu        $v1, $a3, $a2
    ctx->pc = 0x1817d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x1817dc: 0x3c0641b2  lui         $a2, 0x41B2
    ctx->pc = 0x1817dcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16818 << 16));
    // 0x1817e0: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x1817e0u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1817e4: 0xc4600178  lwc1        $f0, 0x178($v1)
    ctx->pc = 0x1817e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1817e8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1817e8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1817ec: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1817ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1817f0: 0xc420f1d8  lwc1        $f0, -0xE28($at)
    ctx->pc = 0x1817f0u;
    { uint32_t bits = FAST_READ32(0x47F1D8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1817f4: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x1817f4u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x1817f8: 0x3c0342b4  lui         $v1, 0x42B4
    ctx->pc = 0x1817f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17076 << 16));
    // 0x1817fc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1817fcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x181800: 0x0  nop
    ctx->pc = 0x181800u;
    // NOP
    // 0x181804: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x181804u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x181808: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x181808u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x18180c: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x18180cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x181810: 0x8423f138  lh          $v1, -0xEC8($at)
    ctx->pc = 0x181810u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x47F138u));
    // 0x181814: 0x3343c  dsll32      $a2, $v1, 16
    ctx->pc = 0x181814u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 16));
    // 0x181818: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x181818u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x18181c: 0x61900  sll         $v1, $a2, 4
    ctx->pc = 0x18181cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x181820: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x181820u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x181824: 0x33140  sll         $a2, $v1, 5
    ctx->pc = 0x181824u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x181828: 0x3c03004a  lui         $v1, 0x4A
    ctx->pc = 0x181828u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)74 << 16));
    // 0x18182c: 0x24631380  addiu       $v1, $v1, 0x1380
    ctx->pc = 0x18182cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4992));
    // 0x181830: 0x663021  addu        $a2, $v1, $a2
    ctx->pc = 0x181830u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x181834: 0x3c0341b2  lui         $v1, 0x41B2
    ctx->pc = 0x181834u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16818 << 16));
    // 0x181838: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x181838u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x18183c: 0xc4c00178  lwc1        $f0, 0x178($a2)
    ctx->pc = 0x18183cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x181840: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x181840u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x181844: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x181844u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x181848: 0xc420f1d8  lwc1        $f0, -0xE28($at)
    ctx->pc = 0x181848u;
    { uint32_t bits = FAST_READ32(0x47F1D8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18184c: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x18184cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x181850: 0x3c0342b4  lui         $v1, 0x42B4
    ctx->pc = 0x181850u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17076 << 16));
    // 0x181854: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x181854u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x181858: 0x0  nop
    ctx->pc = 0x181858u;
    // NOP
    // 0x18185c: 0x46010302  mul.s       $f12, $f0, $f1
    ctx->pc = 0x18185cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x181860: 0xc047fa2  jal         func_11FE88
    ctx->pc = 0x181860u;
    SET_GPR_U32(ctx, 31, 0x181868u);
    ctx->pc = 0x11FE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FE88u, 0x181860u, 0x181868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x181868u;
label_181868:
    // 0x181868: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x181868u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x18186c: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x18186cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x181870: 0xac26f218  sw          $a2, -0xDE8($at)
    ctx->pc = 0x181870u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x47F218u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47F218u, _value); } while (0);
    // 0x181874: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x181874u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x181878: 0x8c23f218  lw          $v1, -0xDE8($at)
    ctx->pc = 0x181878u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x47F218u));
    // 0x18187c: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x18187Cu;
    {
        const bool branch_taken_0x18187c = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x18187c) {
            ctx->pc = 0x181898u;
            goto label_181898;
        }
    }
    ctx->pc = 0x181884u;
    // 0x181884: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x181884u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x181888: 0x0  nop
    ctx->pc = 0x181888u;
    // NOP
    // 0x18188c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x18188cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x181890: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x181890u;
    {
        const bool branch_taken_0x181890 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x181890) {
            ctx->pc = 0x1818B4u;
            goto label_1818b4;
        }
    }
    ctx->pc = 0x181898u;
label_181898:
    // 0x181898: 0x33842  srl         $a3, $v1, 1
    ctx->pc = 0x181898u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x18189c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x18189cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1818a0: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x1818a0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x1818a4: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x1818a4u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1818a8: 0x0  nop
    ctx->pc = 0x1818a8u;
    // NOP
    // 0x1818ac: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1818acu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1818b0: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1818b0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1818b4:
    // 0x1818b4: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x1818b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1818b8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1818b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1818bc: 0x0  nop
    ctx->pc = 0x1818bcu;
    // NOP
    // 0x1818c0: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x1818C0u;
    {
        const bool branch_taken_0x1818c0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1818c0) {
            ctx->pc = 0x1818DCu;
            goto label_1818dc;
        }
    }
    ctx->pc = 0x1818C8u;
    // 0x1818c8: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1818c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1818cc: 0x8c26f218  lw          $a2, -0xDE8($at)
    ctx->pc = 0x1818ccu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x47F218u));
    // 0x1818d0: 0x24c70001  addiu       $a3, $a2, 0x1
    ctx->pc = 0x1818d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1818d4: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1818d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1818d8: 0xac27f218  sw          $a3, -0xDE8($at)
    ctx->pc = 0x1818d8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x47F218u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47F218u, _value); } while (0);
label_1818dc:
    // 0x1818dc: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1818dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1818e0: 0x8423f138  lh          $v1, -0xEC8($at)
    ctx->pc = 0x1818e0u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x47F138u));
    // 0x1818e4: 0x3343c  dsll32      $a2, $v1, 16
    ctx->pc = 0x1818e4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1818e8: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x1818e8u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x1818ec: 0x61900  sll         $v1, $a2, 4
    ctx->pc = 0x1818ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x1818f0: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x1818f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1818f4: 0x33940  sll         $a3, $v1, 5
    ctx->pc = 0x1818f4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x1818f8: 0x3c06004a  lui         $a2, 0x4A
    ctx->pc = 0x1818f8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)74 << 16));
    // 0x1818fc: 0x24c31380  addiu       $v1, $a2, 0x1380
    ctx->pc = 0x1818fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4992));
    // 0x181900: 0x673021  addu        $a2, $v1, $a3
    ctx->pc = 0x181900u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x181904: 0x3c0341b2  lui         $v1, 0x41B2
    ctx->pc = 0x181904u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16818 << 16));
    // 0x181908: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x181908u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x18190c: 0xc4c00178  lwc1        $f0, 0x178($a2)
    ctx->pc = 0x18190cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x181910: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x181910u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x181914: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x181914u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x181918: 0xc420f1d8  lwc1        $f0, -0xE28($at)
    ctx->pc = 0x181918u;
    { uint32_t bits = FAST_READ32(0x47F1D8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18191c: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x18191cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x181920: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x181920u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x181924: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x181924u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x181928: 0x8423f138  lh          $v1, -0xEC8($at)
    ctx->pc = 0x181928u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x47F138u));
    // 0x18192c: 0x3343c  dsll32      $a2, $v1, 16
    ctx->pc = 0x18192cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 16));
    // 0x181930: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x181930u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x181934: 0x61900  sll         $v1, $a2, 4
    ctx->pc = 0x181934u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x181938: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x181938u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x18193c: 0x33140  sll         $a2, $v1, 5
    ctx->pc = 0x18193cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x181940: 0x3c03004a  lui         $v1, 0x4A
    ctx->pc = 0x181940u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)74 << 16));
    // 0x181944: 0x24631380  addiu       $v1, $v1, 0x1380
    ctx->pc = 0x181944u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4992));
    // 0x181948: 0x663021  addu        $a2, $v1, $a2
    ctx->pc = 0x181948u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x18194c: 0x3c0341b2  lui         $v1, 0x41B2
    ctx->pc = 0x18194cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16818 << 16));
    // 0x181950: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x181950u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x181954: 0xc4c00178  lwc1        $f0, 0x178($a2)
    ctx->pc = 0x181954u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x181958: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x181958u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x18195c: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x18195cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x181960: 0xc420f1d8  lwc1        $f0, -0xE28($at)
    ctx->pc = 0x181960u;
    { uint32_t bits = FAST_READ32(0x47F1D8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x181964: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x181964u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x181968: 0x0  nop
    ctx->pc = 0x181968u;
    // NOP
    // 0x18196c: 0x0  nop
    ctx->pc = 0x18196cu;
    // NOP
    // 0x181970: 0x0  nop
    ctx->pc = 0x181970u;
    // NOP
    // 0x181974: 0xc047fa2  jal         func_11FE88
    ctx->pc = 0x181974u;
    SET_GPR_U32(ctx, 31, 0x18197Cu);
    ctx->pc = 0x11FE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FE88u, 0x181974u, 0x18197Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18197Cu;
label_18197c:
    // 0x18197c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x18197cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x181980: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x181980u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x181984: 0xac23f210  sw          $v1, -0xDF0($at)
    ctx->pc = 0x181984u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x47F210u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47F210u, _value); } while (0);
    // 0x181988: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x181988u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x18198c: 0x8c26f210  lw          $a2, -0xDF0($at)
    ctx->pc = 0x18198cu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x47F210u));
    // 0x181990: 0x4c00006  bltz        $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x181990u;
    {
        const bool branch_taken_0x181990 = (GPR_S32(ctx, 6) < 0);
        if (branch_taken_0x181990) {
            ctx->pc = 0x1819ACu;
            goto label_1819ac;
        }
    }
    ctx->pc = 0x181998u;
    // 0x181998: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x181998u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18199c: 0x0  nop
    ctx->pc = 0x18199cu;
    // NOP
    // 0x1819a0: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1819a0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1819a4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1819A4u;
    {
        const bool branch_taken_0x1819a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1819a4) {
            ctx->pc = 0x1819C8u;
            goto label_1819c8;
        }
    }
    ctx->pc = 0x1819ACu;
label_1819ac:
    // 0x1819ac: 0x61842  srl         $v1, $a2, 1
    ctx->pc = 0x1819acu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 6), 1));
    // 0x1819b0: 0x30c40001  andi        $a0, $a2, 0x1
    ctx->pc = 0x1819b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
    // 0x1819b4: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1819b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1819b8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1819b8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1819bc: 0x0  nop
    ctx->pc = 0x1819bcu;
    // NOP
    // 0x1819c0: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1819c0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1819c4: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1819c4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1819c8:
    // 0x1819c8: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x1819c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1819cc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1819ccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1819d0: 0x0  nop
    ctx->pc = 0x1819d0u;
    // NOP
    // 0x1819d4: 0x45000172  bc1f        . + 4 + (0x172 << 2)
    ctx->pc = 0x1819D4u;
    {
        const bool branch_taken_0x1819d4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1819d4) {
            ctx->pc = 0x181FA0u;
            goto label_181fa0;
        }
    }
    ctx->pc = 0x1819DCu;
    // 0x1819dc: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1819dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1819e0: 0x8c23f210  lw          $v1, -0xDF0($at)
    ctx->pc = 0x1819e0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x47F210u));
    // 0x1819e4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1819e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1819e8: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1819e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1819ec: 0xac23f210  sw          $v1, -0xDF0($at)
    ctx->pc = 0x1819ecu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x47F210u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47F210u, _value); } while (0);
    // 0x1819f0: 0x1000016b  b           . + 4 + (0x16B << 2)
    ctx->pc = 0x1819F0u;
    {
        const bool branch_taken_0x1819f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1819f0) {
            ctx->pc = 0x181FA0u;
            goto label_181fa0;
        }
    }
    ctx->pc = 0x1819F8u;
label_1819f8:
    // 0x1819f8: 0x2404005a  addiu       $a0, $zero, 0x5A
    ctx->pc = 0x1819f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
    // 0x1819fc: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1819fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x181a00: 0xac24f218  sw          $a0, -0xDE8($at)
    ctx->pc = 0x181a00u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x47F218u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47F218u, _value); } while (0);
    // 0x181a04: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x181a04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x181a08: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x181a08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x181a0c: 0xac23f210  sw          $v1, -0xDF0($at)
    ctx->pc = 0x181a0cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x47F210u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47F210u, _value); } while (0);
    // 0x181a10: 0x10000163  b           . + 4 + (0x163 << 2)
    ctx->pc = 0x181A10u;
    {
        const bool branch_taken_0x181a10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x181a10) {
            ctx->pc = 0x181FA0u;
            goto label_181fa0;
        }
    }
    ctx->pc = 0x181A18u;
label_181a18:
    // 0x181a18: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x181a18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x181a1c: 0x8423f138  lh          $v1, -0xEC8($at)
    ctx->pc = 0x181a1cu;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x47F138u));
    // 0x181a20: 0x3343c  dsll32      $a2, $v1, 16
    ctx->pc = 0x181a20u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 16));
    // 0x181a24: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x181a24u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x181a28: 0x61900  sll         $v1, $a2, 4
    ctx->pc = 0x181a28u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x181a2c: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x181a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x181a30: 0x33940  sll         $a3, $v1, 5
    ctx->pc = 0x181a30u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x181a34: 0x3c06004a  lui         $a2, 0x4A
    ctx->pc = 0x181a34u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)74 << 16));
    // 0x181a38: 0x24c31380  addiu       $v1, $a2, 0x1380
    ctx->pc = 0x181a38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4992));
    // 0x181a3c: 0x673821  addu        $a3, $v1, $a3
    ctx->pc = 0x181a3cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x181a40: 0x3c0341e3  lui         $v1, 0x41E3
    ctx->pc = 0x181a40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16867 << 16));
    // 0x181a44: 0x34662d43  ori         $a2, $v1, 0x2D43
    ctx->pc = 0x181a44u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)11587);
    // 0x181a48: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x181a48u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x181a4c: 0xc4e00178  lwc1        $f0, 0x178($a3)
    ctx->pc = 0x181a4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x181a50: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x181a50u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x181a54: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x181a54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x181a58: 0xc420f1d8  lwc1        $f0, -0xE28($at)
    ctx->pc = 0x181a58u;
    { uint32_t bits = FAST_READ32(0x47F1D8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x181a5c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x181a5cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x181a60: 0x0  nop
    ctx->pc = 0x181a60u;
    // NOP
    // 0x181a64: 0x45000096  bc1f        . + 4 + (0x96 << 2)
    ctx->pc = 0x181A64u;
    {
        const bool branch_taken_0x181a64 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x181a64) {
            ctx->pc = 0x181CC0u;
            goto label_181cc0;
        }
    }
    ctx->pc = 0x181A6Cu;
    // 0x181a6c: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x181a6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x181a70: 0x8423f138  lh          $v1, -0xEC8($at)
    ctx->pc = 0x181a70u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x47F138u));
    // 0x181a74: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x181a74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x181a78: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x181a78u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x181a7c: 0x33100  sll         $a2, $v1, 4
    ctx->pc = 0x181a7cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x181a80: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x181a80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x181a84: 0x33140  sll         $a2, $v1, 5
    ctx->pc = 0x181a84u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x181a88: 0x3c07004a  lui         $a3, 0x4A
    ctx->pc = 0x181a88u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)74 << 16));
    // 0x181a8c: 0x24e31380  addiu       $v1, $a3, 0x1380
    ctx->pc = 0x181a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4992));
    // 0x181a90: 0x663021  addu        $a2, $v1, $a2
    ctx->pc = 0x181a90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x181a94: 0x3c0341e3  lui         $v1, 0x41E3
    ctx->pc = 0x181a94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16867 << 16));
    // 0x181a98: 0x34632d43  ori         $v1, $v1, 0x2D43
    ctx->pc = 0x181a98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)11587);
    // 0x181a9c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x181a9cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x181aa0: 0xc4c00178  lwc1        $f0, 0x178($a2)
    ctx->pc = 0x181aa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x181aa4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x181aa4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x181aa8: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x181aa8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x181aac: 0xc420f1d8  lwc1        $f0, -0xE28($at)
    ctx->pc = 0x181aacu;
    { uint32_t bits = FAST_READ32(0x47F1D8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x181ab0: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x181ab0u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x181ab4: 0x3c0642b4  lui         $a2, 0x42B4
    ctx->pc = 0x181ab4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17076 << 16));
    // 0x181ab8: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x181ab8u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x181abc: 0x0  nop
    ctx->pc = 0x181abcu;
    // NOP
    // 0x181ac0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x181ac0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x181ac4: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x181ac4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x181ac8: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x181ac8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x181acc: 0x8423f138  lh          $v1, -0xEC8($at)
    ctx->pc = 0x181accu;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x47F138u));
    // 0x181ad0: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x181ad0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x181ad4: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x181ad4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x181ad8: 0x33900  sll         $a3, $v1, 4
    ctx->pc = 0x181ad8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x181adc: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x181adcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x181ae0: 0x33140  sll         $a2, $v1, 5
    ctx->pc = 0x181ae0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x181ae4: 0x3c07004a  lui         $a3, 0x4A
    ctx->pc = 0x181ae4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)74 << 16));
    // 0x181ae8: 0x24e31380  addiu       $v1, $a3, 0x1380
    ctx->pc = 0x181ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4992));
    // 0x181aec: 0x663021  addu        $a2, $v1, $a2
    ctx->pc = 0x181aecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x181af0: 0x3c0341e3  lui         $v1, 0x41E3
    ctx->pc = 0x181af0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16867 << 16));
    // 0x181af4: 0x34632d43  ori         $v1, $v1, 0x2D43
    ctx->pc = 0x181af4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)11587);
    // 0x181af8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x181af8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x181afc: 0xc4c00178  lwc1        $f0, 0x178($a2)
    ctx->pc = 0x181afcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x181b00: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x181b00u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x181b04: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x181b04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x181b08: 0xc420f1d8  lwc1        $f0, -0xE28($at)
    ctx->pc = 0x181b08u;
    { uint32_t bits = FAST_READ32(0x47F1D8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x181b0c: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x181b0cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x181b10: 0x3c0642b4  lui         $a2, 0x42B4
    ctx->pc = 0x181b10u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17076 << 16));
    // 0x181b14: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x181b14u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x181b18: 0x0  nop
    ctx->pc = 0x181b18u;
    // NOP
    // 0x181b1c: 0x46010302  mul.s       $f12, $f0, $f1
    ctx->pc = 0x181b1cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x181b20: 0xc047fa2  jal         func_11FE88
    ctx->pc = 0x181B20u;
    SET_GPR_U32(ctx, 31, 0x181B28u);
    ctx->pc = 0x11FE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FE88u, 0x181B20u, 0x181B28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x181B28u;
label_181b28:
    // 0x181b28: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x181b28u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x181b2c: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x181b2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x181b30: 0xac23f218  sw          $v1, -0xDE8($at)
    ctx->pc = 0x181b30u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x47F218u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47F218u, _value); } while (0);
    // 0x181b34: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x181b34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x181b38: 0x8c23f218  lw          $v1, -0xDE8($at)
    ctx->pc = 0x181b38u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x47F218u));
    // 0x181b3c: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x181B3Cu;
    {
        const bool branch_taken_0x181b3c = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x181b3c) {
            ctx->pc = 0x181B58u;
            goto label_181b58;
        }
    }
    ctx->pc = 0x181B44u;
    // 0x181b44: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x181b44u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x181b48: 0x0  nop
    ctx->pc = 0x181b48u;
    // NOP
    // 0x181b4c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x181b4cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x181b50: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x181B50u;
    {
        const bool branch_taken_0x181b50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x181b50) {
            ctx->pc = 0x181B74u;
            goto label_181b74;
        }
    }
    ctx->pc = 0x181B58u;
label_181b58:
    // 0x181b58: 0x33042  srl         $a2, $v1, 1
    ctx->pc = 0x181b58u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x181b5c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x181b5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x181b60: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x181b60u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x181b64: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x181b64u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x181b68: 0x0  nop
    ctx->pc = 0x181b68u;
    // NOP
    // 0x181b6c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x181b6cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x181b70: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x181b70u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_181b74:
    // 0x181b74: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x181b74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x181b78: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x181b78u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x181b7c: 0x0  nop
    ctx->pc = 0x181b7cu;
    // NOP
    // 0x181b80: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x181B80u;
    {
        const bool branch_taken_0x181b80 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x181b80) {
            ctx->pc = 0x181B9Cu;
            goto label_181b9c;
        }
    }
    ctx->pc = 0x181B88u;
    // 0x181b88: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x181b88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x181b8c: 0x8c23f218  lw          $v1, -0xDE8($at)
    ctx->pc = 0x181b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x47F218u));
    // 0x181b90: 0x24660001  addiu       $a2, $v1, 0x1
    ctx->pc = 0x181b90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x181b94: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x181b94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x181b98: 0xac26f218  sw          $a2, -0xDE8($at)
    ctx->pc = 0x181b98u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x47F218u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47F218u, _value); } while (0);
label_181b9c:
    // 0x181b9c: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x181b9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x181ba0: 0x8423f138  lh          $v1, -0xEC8($at)
    ctx->pc = 0x181ba0u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x47F138u));
    // 0x181ba4: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x181ba4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x181ba8: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x181ba8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x181bac: 0x33900  sll         $a3, $v1, 4
    ctx->pc = 0x181bacu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x181bb0: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x181bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x181bb4: 0x33140  sll         $a2, $v1, 5
    ctx->pc = 0x181bb4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x181bb8: 0x3c03004a  lui         $v1, 0x4A
    ctx->pc = 0x181bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)74 << 16));
    // 0x181bbc: 0x24681380  addiu       $t0, $v1, 0x1380
    ctx->pc = 0x181bbcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 4992));
    // 0x181bc0: 0x1063821  addu        $a3, $t0, $a2
    ctx->pc = 0x181bc0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x181bc4: 0x3c0641e3  lui         $a2, 0x41E3
    ctx->pc = 0x181bc4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16867 << 16));
    // 0x181bc8: 0x34c32d43  ori         $v1, $a2, 0x2D43
    ctx->pc = 0x181bc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)11587);
    // 0x181bcc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x181bccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x181bd0: 0xc4e00178  lwc1        $f0, 0x178($a3)
    ctx->pc = 0x181bd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x181bd4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x181bd4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x181bd8: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x181bd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x181bdc: 0xc420f1d8  lwc1        $f0, -0xE28($at)
    ctx->pc = 0x181bdcu;
    { uint32_t bits = FAST_READ32(0x47F1D8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x181be0: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x181be0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x181be4: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x181be4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x181be8: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x181be8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x181bec: 0x8423f138  lh          $v1, -0xEC8($at)
    ctx->pc = 0x181becu;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x47F138u));
    // 0x181bf0: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x181bf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x181bf4: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x181bf4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x181bf8: 0x33100  sll         $a2, $v1, 4
    ctx->pc = 0x181bf8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x181bfc: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x181bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x181c00: 0x33940  sll         $a3, $v1, 5
    ctx->pc = 0x181c00u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x181c04: 0x3c06004a  lui         $a2, 0x4A
    ctx->pc = 0x181c04u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)74 << 16));
    // 0x181c08: 0x24c31380  addiu       $v1, $a2, 0x1380
    ctx->pc = 0x181c08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4992));
    // 0x181c0c: 0x673821  addu        $a3, $v1, $a3
    ctx->pc = 0x181c0cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x181c10: 0x3c0641e3  lui         $a2, 0x41E3
    ctx->pc = 0x181c10u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16867 << 16));
    // 0x181c14: 0x34c32d43  ori         $v1, $a2, 0x2D43
    ctx->pc = 0x181c14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)11587);
    // 0x181c18: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x181c18u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x181c1c: 0xc4e00178  lwc1        $f0, 0x178($a3)
    ctx->pc = 0x181c1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x181c20: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x181c20u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x181c24: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x181c24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x181c28: 0xc420f1d8  lwc1        $f0, -0xE28($at)
    ctx->pc = 0x181c28u;
    { uint32_t bits = FAST_READ32(0x47F1D8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x181c2c: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x181c2cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x181c30: 0x0  nop
    ctx->pc = 0x181c30u;
    // NOP
    // 0x181c34: 0x0  nop
    ctx->pc = 0x181c34u;
    // NOP
    // 0x181c38: 0x0  nop
    ctx->pc = 0x181c38u;
    // NOP
    // 0x181c3c: 0xc047fa2  jal         func_11FE88
    ctx->pc = 0x181C3Cu;
    SET_GPR_U32(ctx, 31, 0x181C44u);
    ctx->pc = 0x11FE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FE88u, 0x181C3Cu, 0x181C44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x181C44u;
label_181c44:
    // 0x181c44: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x181c44u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x181c48: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x181c48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x181c4c: 0xac23f210  sw          $v1, -0xDF0($at)
    ctx->pc = 0x181c4cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x47F210u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47F210u, _value); } while (0);
    // 0x181c50: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x181c50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x181c54: 0x8c23f210  lw          $v1, -0xDF0($at)
    ctx->pc = 0x181c54u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x47F210u));
    // 0x181c58: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x181C58u;
    {
        const bool branch_taken_0x181c58 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x181c58) {
            ctx->pc = 0x181C74u;
            goto label_181c74;
        }
    }
    ctx->pc = 0x181C60u;
    // 0x181c60: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x181c60u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x181c64: 0x0  nop
    ctx->pc = 0x181c64u;
    // NOP
    // 0x181c68: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x181c68u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x181c6c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x181C6Cu;
    {
        const bool branch_taken_0x181c6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x181c6c) {
            ctx->pc = 0x181C90u;
            goto label_181c90;
        }
    }
    ctx->pc = 0x181C74u;
label_181c74:
    // 0x181c74: 0x33042  srl         $a2, $v1, 1
    ctx->pc = 0x181c74u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x181c78: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x181c78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x181c7c: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x181c7cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x181c80: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x181c80u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x181c84: 0x0  nop
    ctx->pc = 0x181c84u;
    // NOP
    // 0x181c88: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x181c88u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x181c8c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x181c8cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_181c90:
    // 0x181c90: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x181c90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x181c94: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x181c94u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x181c98: 0x0  nop
    ctx->pc = 0x181c98u;
    // NOP
    // 0x181c9c: 0x450000c0  bc1f        . + 4 + (0xC0 << 2)
    ctx->pc = 0x181C9Cu;
    {
        const bool branch_taken_0x181c9c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x181c9c) {
            ctx->pc = 0x181FA0u;
            goto label_181fa0;
        }
    }
    ctx->pc = 0x181CA4u;
    // 0x181ca4: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x181ca4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x181ca8: 0x8c23f210  lw          $v1, -0xDF0($at)
    ctx->pc = 0x181ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x47F210u));
    // 0x181cac: 0x24670001  addiu       $a3, $v1, 0x1
    ctx->pc = 0x181cacu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x181cb0: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x181cb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x181cb4: 0xac27f210  sw          $a3, -0xDF0($at)
    ctx->pc = 0x181cb4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x47F210u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47F210u, _value); } while (0);
    // 0x181cb8: 0x100000b9  b           . + 4 + (0xB9 << 2)
    ctx->pc = 0x181CB8u;
    {
        const bool branch_taken_0x181cb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x181cb8) {
            ctx->pc = 0x181FA0u;
            goto label_181fa0;
        }
    }
    ctx->pc = 0x181CC0u;
label_181cc0:
    // 0x181cc0: 0x2406005a  addiu       $a2, $zero, 0x5A
    ctx->pc = 0x181cc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
    // 0x181cc4: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x181cc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x181cc8: 0xac26f218  sw          $a2, -0xDE8($at)
    ctx->pc = 0x181cc8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x47F218u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47F218u, _value); } while (0);
    // 0x181ccc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x181cccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x181cd0: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x181cd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x181cd4: 0xac23f210  sw          $v1, -0xDF0($at)
    ctx->pc = 0x181cd4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x47F210u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47F210u, _value); } while (0);
    // 0x181cd8: 0x100000b1  b           . + 4 + (0xB1 << 2)
    ctx->pc = 0x181CD8u;
    {
        const bool branch_taken_0x181cd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x181cd8) {
            ctx->pc = 0x181FA0u;
            goto label_181fa0;
        }
    }
    ctx->pc = 0x181CE0u;
label_181ce0:
    // 0x181ce0: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x181ce0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x181ce4: 0x8426f138  lh          $a2, -0xEC8($at)
    ctx->pc = 0x181ce4u;
    SET_GPR_S32(ctx, 6, (int16_t)FAST_READ16(0x47F138u));
    // 0x181ce8: 0x61c3c  dsll32      $v1, $a2, 16
    ctx->pc = 0x181ce8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << (32 + 16));
    // 0x181cec: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x181cecu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x181cf0: 0x33100  sll         $a2, $v1, 4
    ctx->pc = 0x181cf0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x181cf4: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x181cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x181cf8: 0x33140  sll         $a2, $v1, 5
    ctx->pc = 0x181cf8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x181cfc: 0x3c07004a  lui         $a3, 0x4A
    ctx->pc = 0x181cfcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)74 << 16));
    // 0x181d00: 0x24e31380  addiu       $v1, $a3, 0x1380
    ctx->pc = 0x181d00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4992));
    // 0x181d04: 0x663021  addu        $a2, $v1, $a2
    ctx->pc = 0x181d04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x181d08: 0x3c034180  lui         $v1, 0x4180
    ctx->pc = 0x181d08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16768 << 16));
    // 0x181d0c: 0x3463d289  ori         $v1, $v1, 0xD289
    ctx->pc = 0x181d0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)53897);
    // 0x181d10: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x181d10u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x181d14: 0xc4c00178  lwc1        $f0, 0x178($a2)
    ctx->pc = 0x181d14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x181d18: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x181d18u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x181d1c: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x181d1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x181d20: 0xc420f1d8  lwc1        $f0, -0xE28($at)
    ctx->pc = 0x181d20u;
    { uint32_t bits = FAST_READ32(0x47F1D8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x181d24: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x181d24u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x181d28: 0x0  nop
    ctx->pc = 0x181d28u;
    // NOP
    // 0x181d2c: 0x45000096  bc1f        . + 4 + (0x96 << 2)
    ctx->pc = 0x181D2Cu;
    {
        const bool branch_taken_0x181d2c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x181d2c) {
            ctx->pc = 0x181F88u;
            goto label_181f88;
        }
    }
    ctx->pc = 0x181D34u;
    // 0x181d34: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x181d34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x181d38: 0x8426f138  lh          $a2, -0xEC8($at)
    ctx->pc = 0x181d38u;
    SET_GPR_S32(ctx, 6, (int16_t)FAST_READ16(0x47F138u));
    // 0x181d3c: 0x61c3c  dsll32      $v1, $a2, 16
    ctx->pc = 0x181d3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << (32 + 16));
    // 0x181d40: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x181d40u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x181d44: 0x33100  sll         $a2, $v1, 4
    ctx->pc = 0x181d44u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x181d48: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x181d48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x181d4c: 0x33940  sll         $a3, $v1, 5
    ctx->pc = 0x181d4cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x181d50: 0x3c03004a  lui         $v1, 0x4A
    ctx->pc = 0x181d50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)74 << 16));
    // 0x181d54: 0x24661380  addiu       $a2, $v1, 0x1380
    ctx->pc = 0x181d54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4992));
    // 0x181d58: 0xc73821  addu        $a3, $a2, $a3
    ctx->pc = 0x181d58u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x181d5c: 0x3c064180  lui         $a2, 0x4180
    ctx->pc = 0x181d5cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16768 << 16));
    // 0x181d60: 0x34c3d289  ori         $v1, $a2, 0xD289
    ctx->pc = 0x181d60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)53897);
    // 0x181d64: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x181d64u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x181d68: 0xc4e00178  lwc1        $f0, 0x178($a3)
    ctx->pc = 0x181d68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x181d6c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x181d6cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x181d70: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x181d70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x181d74: 0xc420f1d8  lwc1        $f0, -0xE28($at)
    ctx->pc = 0x181d74u;
    { uint32_t bits = FAST_READ32(0x47F1D8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x181d78: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x181d78u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x181d7c: 0x3c0342b4  lui         $v1, 0x42B4
    ctx->pc = 0x181d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17076 << 16));
    // 0x181d80: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x181d80u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x181d84: 0x0  nop
    ctx->pc = 0x181d84u;
    // NOP
    // 0x181d88: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x181d88u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x181d8c: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x181d8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x181d90: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x181d90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x181d94: 0x8423f138  lh          $v1, -0xEC8($at)
    ctx->pc = 0x181d94u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x47F138u));
    // 0x181d98: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x181d98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x181d9c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x181d9cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x181da0: 0x33100  sll         $a2, $v1, 4
    ctx->pc = 0x181da0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x181da4: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x181da4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x181da8: 0x33140  sll         $a2, $v1, 5
    ctx->pc = 0x181da8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x181dac: 0x3c03004a  lui         $v1, 0x4A
    ctx->pc = 0x181dacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)74 << 16));
    // 0x181db0: 0x24671380  addiu       $a3, $v1, 0x1380
    ctx->pc = 0x181db0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 4992));
    // 0x181db4: 0xe63021  addu        $a2, $a3, $a2
    ctx->pc = 0x181db4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x181db8: 0x3c034180  lui         $v1, 0x4180
    ctx->pc = 0x181db8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16768 << 16));
    // 0x181dbc: 0x3463d289  ori         $v1, $v1, 0xD289
    ctx->pc = 0x181dbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)53897);
    // 0x181dc0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x181dc0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x181dc4: 0xc4c00178  lwc1        $f0, 0x178($a2)
    ctx->pc = 0x181dc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x181dc8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x181dc8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x181dcc: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x181dccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x181dd0: 0xc420f1d8  lwc1        $f0, -0xE28($at)
    ctx->pc = 0x181dd0u;
    { uint32_t bits = FAST_READ32(0x47F1D8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x181dd4: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x181dd4u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x181dd8: 0x3c0642b4  lui         $a2, 0x42B4
    ctx->pc = 0x181dd8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17076 << 16));
    // 0x181ddc: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x181ddcu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x181de0: 0x0  nop
    ctx->pc = 0x181de0u;
    // NOP
    // 0x181de4: 0x46010302  mul.s       $f12, $f0, $f1
    ctx->pc = 0x181de4u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x181de8: 0xc047fa2  jal         func_11FE88
    ctx->pc = 0x181DE8u;
    SET_GPR_U32(ctx, 31, 0x181DF0u);
    ctx->pc = 0x11FE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FE88u, 0x181DE8u, 0x181DF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x181DF0u;
label_181df0:
    // 0x181df0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x181df0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x181df4: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x181df4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x181df8: 0xac23f218  sw          $v1, -0xDE8($at)
    ctx->pc = 0x181df8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x47F218u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47F218u, _value); } while (0);
    // 0x181dfc: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x181dfcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x181e00: 0x8c26f218  lw          $a2, -0xDE8($at)
    ctx->pc = 0x181e00u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x47F218u));
    // 0x181e04: 0x4c00006  bltz        $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x181E04u;
    {
        const bool branch_taken_0x181e04 = (GPR_S32(ctx, 6) < 0);
        if (branch_taken_0x181e04) {
            ctx->pc = 0x181E20u;
            goto label_181e20;
        }
    }
    ctx->pc = 0x181E0Cu;
    // 0x181e0c: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x181e0cu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x181e10: 0x0  nop
    ctx->pc = 0x181e10u;
    // NOP
    // 0x181e14: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x181e14u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x181e18: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x181E18u;
    {
        const bool branch_taken_0x181e18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x181e18) {
            ctx->pc = 0x181E3Cu;
            goto label_181e3c;
        }
    }
    ctx->pc = 0x181E20u;
label_181e20:
    // 0x181e20: 0x61842  srl         $v1, $a2, 1
    ctx->pc = 0x181e20u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 6), 1));
    // 0x181e24: 0x30c60001  andi        $a2, $a2, 0x1
    ctx->pc = 0x181e24u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
    // 0x181e28: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x181e28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x181e2c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x181e2cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x181e30: 0x0  nop
    ctx->pc = 0x181e30u;
    // NOP
    // 0x181e34: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x181e34u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x181e38: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x181e38u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_181e3c:
    // 0x181e3c: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x181e3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x181e40: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x181e40u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x181e44: 0x0  nop
    ctx->pc = 0x181e44u;
    // NOP
    // 0x181e48: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x181E48u;
    {
        const bool branch_taken_0x181e48 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x181e48) {
            ctx->pc = 0x181E64u;
            goto label_181e64;
        }
    }
    ctx->pc = 0x181E50u;
    // 0x181e50: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x181e50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x181e54: 0x8c23f218  lw          $v1, -0xDE8($at)
    ctx->pc = 0x181e54u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x47F218u));
    // 0x181e58: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x181e58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x181e5c: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x181e5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x181e60: 0xac23f218  sw          $v1, -0xDE8($at)
    ctx->pc = 0x181e60u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x47F218u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47F218u, _value); } while (0);
label_181e64:
    // 0x181e64: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x181e64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x181e68: 0x8427f138  lh          $a3, -0xEC8($at)
    ctx->pc = 0x181e68u;
    SET_GPR_S32(ctx, 7, (int16_t)FAST_READ16(0x47F138u));
    // 0x181e6c: 0x7343c  dsll32      $a2, $a3, 16
    ctx->pc = 0x181e6cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) << (32 + 16));
    // 0x181e70: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x181e70u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x181e74: 0x61900  sll         $v1, $a2, 4
    ctx->pc = 0x181e74u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x181e78: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x181e78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x181e7c: 0x33940  sll         $a3, $v1, 5
    ctx->pc = 0x181e7cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x181e80: 0x3c03004a  lui         $v1, 0x4A
    ctx->pc = 0x181e80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)74 << 16));
    // 0x181e84: 0x24661380  addiu       $a2, $v1, 0x1380
    ctx->pc = 0x181e84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4992));
    // 0x181e88: 0xc71821  addu        $v1, $a2, $a3
    ctx->pc = 0x181e88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x181e8c: 0x3c064180  lui         $a2, 0x4180
    ctx->pc = 0x181e8cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16768 << 16));
    // 0x181e90: 0x34c7d289  ori         $a3, $a2, 0xD289
    ctx->pc = 0x181e90u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)53897);
    // 0x181e94: 0x44870800  mtc1        $a3, $f1
    ctx->pc = 0x181e94u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x181e98: 0xc4600178  lwc1        $f0, 0x178($v1)
    ctx->pc = 0x181e98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x181e9c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x181e9cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x181ea0: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x181ea0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x181ea4: 0xc420f1d8  lwc1        $f0, -0xE28($at)
    ctx->pc = 0x181ea4u;
    { uint32_t bits = FAST_READ32(0x47F1D8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x181ea8: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x181ea8u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x181eac: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x181eacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x181eb0: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x181eb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x181eb4: 0x8423f138  lh          $v1, -0xEC8($at)
    ctx->pc = 0x181eb4u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x47F138u));
    // 0x181eb8: 0x3343c  dsll32      $a2, $v1, 16
    ctx->pc = 0x181eb8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 16));
    // 0x181ebc: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x181ebcu;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x181ec0: 0x61900  sll         $v1, $a2, 4
    ctx->pc = 0x181ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x181ec4: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x181ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x181ec8: 0x33940  sll         $a3, $v1, 5
    ctx->pc = 0x181ec8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x181ecc: 0x3c03004a  lui         $v1, 0x4A
    ctx->pc = 0x181eccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)74 << 16));
    // 0x181ed0: 0x24661380  addiu       $a2, $v1, 0x1380
    ctx->pc = 0x181ed0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4992));
    // 0x181ed4: 0xc73821  addu        $a3, $a2, $a3
    ctx->pc = 0x181ed4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x181ed8: 0x3c064180  lui         $a2, 0x4180
    ctx->pc = 0x181ed8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16768 << 16));
    // 0x181edc: 0x34c3d289  ori         $v1, $a2, 0xD289
    ctx->pc = 0x181edcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)53897);
    // 0x181ee0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x181ee0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x181ee4: 0xc4e00178  lwc1        $f0, 0x178($a3)
    ctx->pc = 0x181ee4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x181ee8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x181ee8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x181eec: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x181eecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x181ef0: 0xc420f1d8  lwc1        $f0, -0xE28($at)
    ctx->pc = 0x181ef0u;
    { uint32_t bits = FAST_READ32(0x47F1D8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x181ef4: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x181ef4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x181ef8: 0x0  nop
    ctx->pc = 0x181ef8u;
    // NOP
    // 0x181efc: 0x0  nop
    ctx->pc = 0x181efcu;
    // NOP
    // 0x181f00: 0x0  nop
    ctx->pc = 0x181f00u;
    // NOP
    // 0x181f04: 0xc047fa2  jal         func_11FE88
    ctx->pc = 0x181F04u;
    SET_GPR_U32(ctx, 31, 0x181F0Cu);
    ctx->pc = 0x11FE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FE88u, 0x181F04u, 0x181F0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x181F0Cu;
label_181f0c:
    // 0x181f0c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x181f0cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x181f10: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x181f10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x181f14: 0xac23f210  sw          $v1, -0xDF0($at)
    ctx->pc = 0x181f14u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x47F210u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47F210u, _value); } while (0);
    // 0x181f18: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x181f18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x181f1c: 0x8c26f210  lw          $a2, -0xDF0($at)
    ctx->pc = 0x181f1cu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x47F210u));
    // 0x181f20: 0x4c00006  bltz        $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x181F20u;
    {
        const bool branch_taken_0x181f20 = (GPR_S32(ctx, 6) < 0);
        if (branch_taken_0x181f20) {
            ctx->pc = 0x181F3Cu;
            goto label_181f3c;
        }
    }
    ctx->pc = 0x181F28u;
    // 0x181f28: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x181f28u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x181f2c: 0x0  nop
    ctx->pc = 0x181f2cu;
    // NOP
    // 0x181f30: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x181f30u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x181f34: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x181F34u;
    {
        const bool branch_taken_0x181f34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x181f34) {
            ctx->pc = 0x181F58u;
            goto label_181f58;
        }
    }
    ctx->pc = 0x181F3Cu;
label_181f3c:
    // 0x181f3c: 0x61842  srl         $v1, $a2, 1
    ctx->pc = 0x181f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 6), 1));
    // 0x181f40: 0x30c60001  andi        $a2, $a2, 0x1
    ctx->pc = 0x181f40u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
    // 0x181f44: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x181f44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x181f48: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x181f48u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x181f4c: 0x0  nop
    ctx->pc = 0x181f4cu;
    // NOP
    // 0x181f50: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x181f50u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x181f54: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x181f54u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_181f58:
    // 0x181f58: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x181f58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x181f5c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x181f5cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x181f60: 0x0  nop
    ctx->pc = 0x181f60u;
    // NOP
    // 0x181f64: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x181F64u;
    {
        const bool branch_taken_0x181f64 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x181f64) {
            ctx->pc = 0x181FA0u;
            goto label_181fa0;
        }
    }
    ctx->pc = 0x181F6Cu;
    // 0x181f6c: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x181f6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x181f70: 0x8c23f210  lw          $v1, -0xDF0($at)
    ctx->pc = 0x181f70u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x47F210u));
    // 0x181f74: 0x24670001  addiu       $a3, $v1, 0x1
    ctx->pc = 0x181f74u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x181f78: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x181f78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x181f7c: 0xac27f210  sw          $a3, -0xDF0($at)
    ctx->pc = 0x181f7cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x47F210u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47F210u, _value); } while (0);
    // 0x181f80: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x181F80u;
    {
        const bool branch_taken_0x181f80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x181f80) {
            ctx->pc = 0x181FA0u;
            goto label_181fa0;
        }
    }
    ctx->pc = 0x181F88u;
label_181f88:
    // 0x181f88: 0x2406005a  addiu       $a2, $zero, 0x5A
    ctx->pc = 0x181f88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
    // 0x181f8c: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x181f8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x181f90: 0xac26f218  sw          $a2, -0xDE8($at)
    ctx->pc = 0x181f90u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x47F218u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47F218u, _value); } while (0);
    // 0x181f94: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x181f94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x181f98: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x181f98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x181f9c: 0xac23f210  sw          $v1, -0xDF0($at)
    ctx->pc = 0x181f9cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x47F210u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47F210u, _value); } while (0);
label_181fa0:
    // 0x181fa0: 0x1000011e  b           . + 4 + (0x11E << 2)
    ctx->pc = 0x181FA0u;
    {
        const bool branch_taken_0x181fa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x181fa0) {
            ctx->pc = 0x18241Cu;
            goto label_18241c;
        }
    }
    ctx->pc = 0x181FA8u;
label_181fa8:
    // 0x181fa8: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x181fa8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x181fac: 0x8c28f228  lw          $t0, -0xDD8($at)
    ctx->pc = 0x181facu;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x47F228u));
    // 0x181fb0: 0x3c07000c  lui         $a3, 0xC
    ctx->pc = 0x181fb0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)12 << 16));
    // 0x181fb4: 0x1107005c  beq         $t0, $a3, . + 4 + (0x5C << 2)
    ctx->pc = 0x181FB4u;
    {
        const bool branch_taken_0x181fb4 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 7));
        if (branch_taken_0x181fb4) {
            ctx->pc = 0x182128u;
            goto label_182128;
        }
    }
    ctx->pc = 0x181FBCu;
    // 0x181fbc: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x181fbcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
    // 0x181fc0: 0x1106003e  beq         $t0, $a2, . + 4 + (0x3E << 2)
    ctx->pc = 0x181FC0u;
    {
        const bool branch_taken_0x181fc0 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 6));
        if (branch_taken_0x181fc0) {
            ctx->pc = 0x1820BCu;
            goto label_1820bc;
        }
    }
    ctx->pc = 0x181FC8u;
    // 0x181fc8: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x181fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
    // 0x181fcc: 0x11030020  beq         $t0, $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x181FCCu;
    {
        const bool branch_taken_0x181fcc = (GPR_U64(ctx, 8) == GPR_U64(ctx, 3));
        if (branch_taken_0x181fcc) {
            ctx->pc = 0x182050u;
            goto label_182050;
        }
    }
    ctx->pc = 0x181FD4u;
    // 0x181fd4: 0x11000003  beqz        $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x181FD4u;
    {
        const bool branch_taken_0x181fd4 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x181fd4) {
            ctx->pc = 0x181FE4u;
            goto label_181fe4;
        }
    }
    ctx->pc = 0x181FDCu;
    // 0x181fdc: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x181FDCu;
    {
        const bool branch_taken_0x181fdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x181fdc) {
            ctx->pc = 0x181FE4u;
            goto label_181fe4;
        }
    }
    ctx->pc = 0x181FE4u;
label_181fe4:
    // 0x181fe4: 0xc60101b0  lwc1        $f1, 0x1B0($s0)
    ctx->pc = 0x181fe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x181fe8: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x181fe8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x181fec: 0xc420f1f0  lwc1        $f0, -0xE10($at)
    ctx->pc = 0x181fecu;
    { uint32_t bits = FAST_READ32(0x47F1F0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x181ff0: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x181ff0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x181ff4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x181ff4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x181ff8: 0x0  nop
    ctx->pc = 0x181ff8u;
    // NOP
    // 0x181ffc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x181ffcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x182000: 0x0  nop
    ctx->pc = 0x182000u;
    // NOP
    // 0x182004: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x182004u;
    {
        const bool branch_taken_0x182004 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x182004) {
            ctx->pc = 0x18202Cu;
            goto label_18202c;
        }
    }
    ctx->pc = 0x18200Cu;
    // 0x18200c: 0xc60101b0  lwc1        $f1, 0x1B0($s0)
    ctx->pc = 0x18200cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x182010: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x182010u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x182014: 0xc420f1f0  lwc1        $f0, -0xE10($at)
    ctx->pc = 0x182014u;
    { uint32_t bits = FAST_READ32(0x47F1F0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x182018: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x182018u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x18201c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x18201cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x182020: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x182020u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x182024: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x182024u;
    {
        const bool branch_taken_0x182024 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x182024) {
            ctx->pc = 0x182040u;
            goto label_182040;
        }
    }
    ctx->pc = 0x18202Cu;
label_18202c:
    // 0x18202c: 0xc60101b0  lwc1        $f1, 0x1B0($s0)
    ctx->pc = 0x18202cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x182030: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x182030u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x182034: 0xc420f1f0  lwc1        $f0, -0xE10($at)
    ctx->pc = 0x182034u;
    { uint32_t bits = FAST_READ32(0x47F1F0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x182038: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x182038u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x18203c: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x18203cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_182040:
    // 0x182040: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x182040u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x182044: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x182044u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x182048: 0x10000050  b           . + 4 + (0x50 << 2)
    ctx->pc = 0x182048u;
    {
        const bool branch_taken_0x182048 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x182048) {
            ctx->pc = 0x18218Cu;
            goto label_18218c;
        }
    }
    ctx->pc = 0x182050u;
label_182050:
    // 0x182050: 0xc60101b0  lwc1        $f1, 0x1B0($s0)
    ctx->pc = 0x182050u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x182054: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x182054u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x182058: 0xc420f1f0  lwc1        $f0, -0xE10($at)
    ctx->pc = 0x182058u;
    { uint32_t bits = FAST_READ32(0x47F1F0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18205c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x18205cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x182060: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x182060u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x182064: 0x0  nop
    ctx->pc = 0x182064u;
    // NOP
    // 0x182068: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x182068u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18206c: 0x0  nop
    ctx->pc = 0x18206cu;
    // NOP
    // 0x182070: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x182070u;
    {
        const bool branch_taken_0x182070 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x182070) {
            ctx->pc = 0x182098u;
            goto label_182098;
        }
    }
    ctx->pc = 0x182078u;
    // 0x182078: 0xc60101b0  lwc1        $f1, 0x1B0($s0)
    ctx->pc = 0x182078u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18207c: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x18207cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x182080: 0xc420f1f0  lwc1        $f0, -0xE10($at)
    ctx->pc = 0x182080u;
    { uint32_t bits = FAST_READ32(0x47F1F0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x182084: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x182084u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x182088: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x182088u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x18208c: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x18208cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x182090: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x182090u;
    {
        const bool branch_taken_0x182090 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x182090) {
            ctx->pc = 0x1820ACu;
            goto label_1820ac;
        }
    }
    ctx->pc = 0x182098u;
label_182098:
    // 0x182098: 0xc60101b0  lwc1        $f1, 0x1B0($s0)
    ctx->pc = 0x182098u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18209c: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x18209cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1820a0: 0xc420f1f0  lwc1        $f0, -0xE10($at)
    ctx->pc = 0x1820a0u;
    { uint32_t bits = FAST_READ32(0x47F1F0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1820a4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1820a4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1820a8: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x1820a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_1820ac:
    // 0x1820ac: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x1820acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1820b0: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x1820b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x1820b4: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x1820B4u;
    {
        const bool branch_taken_0x1820b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1820b4) {
            ctx->pc = 0x18218Cu;
            goto label_18218c;
        }
    }
    ctx->pc = 0x1820BCu;
label_1820bc:
    // 0x1820bc: 0xc60101b0  lwc1        $f1, 0x1B0($s0)
    ctx->pc = 0x1820bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1820c0: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1820c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1820c4: 0xc420f1f0  lwc1        $f0, -0xE10($at)
    ctx->pc = 0x1820c4u;
    { uint32_t bits = FAST_READ32(0x47F1F0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1820c8: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1820c8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1820cc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1820ccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1820d0: 0x0  nop
    ctx->pc = 0x1820d0u;
    // NOP
    // 0x1820d4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1820d4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1820d8: 0x0  nop
    ctx->pc = 0x1820d8u;
    // NOP
    // 0x1820dc: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x1820DCu;
    {
        const bool branch_taken_0x1820dc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1820dc) {
            ctx->pc = 0x182104u;
            goto label_182104;
        }
    }
    ctx->pc = 0x1820E4u;
    // 0x1820e4: 0xc60101b0  lwc1        $f1, 0x1B0($s0)
    ctx->pc = 0x1820e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1820e8: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1820e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1820ec: 0xc420f1f0  lwc1        $f0, -0xE10($at)
    ctx->pc = 0x1820ecu;
    { uint32_t bits = FAST_READ32(0x47F1F0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1820f0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1820f0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1820f4: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1820f4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1820f8: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x1820f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x1820fc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1820FCu;
    {
        const bool branch_taken_0x1820fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1820fc) {
            ctx->pc = 0x182118u;
            goto label_182118;
        }
    }
    ctx->pc = 0x182104u;
label_182104:
    // 0x182104: 0xc60101b0  lwc1        $f1, 0x1B0($s0)
    ctx->pc = 0x182104u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x182108: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x182108u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x18210c: 0xc420f1f0  lwc1        $f0, -0xE10($at)
    ctx->pc = 0x18210cu;
    { uint32_t bits = FAST_READ32(0x47F1F0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x182110: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x182110u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x182114: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x182114u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_182118:
    // 0x182118: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x182118u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18211c: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x18211cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x182120: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x182120u;
    {
        const bool branch_taken_0x182120 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x182120) {
            ctx->pc = 0x18218Cu;
            goto label_18218c;
        }
    }
    ctx->pc = 0x182128u;
label_182128:
    // 0x182128: 0xc60101b0  lwc1        $f1, 0x1B0($s0)
    ctx->pc = 0x182128u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18212c: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x18212cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x182130: 0xc420f1f8  lwc1        $f0, -0xE08($at)
    ctx->pc = 0x182130u;
    { uint32_t bits = FAST_READ32(0x47F1F8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x182134: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x182134u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x182138: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x182138u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18213c: 0x0  nop
    ctx->pc = 0x18213cu;
    // NOP
    // 0x182140: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x182140u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x182144: 0x0  nop
    ctx->pc = 0x182144u;
    // NOP
    // 0x182148: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x182148u;
    {
        const bool branch_taken_0x182148 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x182148) {
            ctx->pc = 0x182170u;
            goto label_182170;
        }
    }
    ctx->pc = 0x182150u;
    // 0x182150: 0xc60101b0  lwc1        $f1, 0x1B0($s0)
    ctx->pc = 0x182150u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x182154: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x182154u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x182158: 0xc420f1f8  lwc1        $f0, -0xE08($at)
    ctx->pc = 0x182158u;
    { uint32_t bits = FAST_READ32(0x47F1F8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18215c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x18215cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x182160: 0x46000807  neg.s       $f0, $f1
    ctx->pc = 0x182160u;
    ctx->f[0] = FPU_NEG_S(ctx->f[1]);
    // 0x182164: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x182164u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x182168: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x182168u;
    {
        const bool branch_taken_0x182168 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x182168) {
            ctx->pc = 0x182184u;
            goto label_182184;
        }
    }
    ctx->pc = 0x182170u;
label_182170:
    // 0x182170: 0xc60001b0  lwc1        $f0, 0x1B0($s0)
    ctx->pc = 0x182170u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x182174: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x182174u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x182178: 0xc421f1f8  lwc1        $f1, -0xE08($at)
    ctx->pc = 0x182178u;
    { uint32_t bits = FAST_READ32(0x47F1F8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18217c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x18217cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x182180: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x182180u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
label_182184:
    // 0x182184: 0xc7a0004c  lwc1        $f0, 0x4C($sp)
    ctx->pc = 0x182184u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x182188: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x182188u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_18218c:
    // 0x18218c: 0xc7ac0038  lwc1        $f12, 0x38($sp)
    ctx->pc = 0x18218cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x182190: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x182190u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x182194: 0xc42df1d8  lwc1        $f13, -0xE28($at)
    ctx->pc = 0x182194u;
    { uint32_t bits = FAST_READ32(0x47F1D8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x182198: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x182198u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x18219c: 0x8c26f210  lw          $a2, -0xDF0($at)
    ctx->pc = 0x18219cu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x47F210u));
    // 0x1821a0: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x1821a0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x1821a4: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x1821a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x1821a8: 0x2463f230  addiu       $v1, $v1, -0xDD0
    ctx->pc = 0x1821a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963760));
    // 0x1821ac: 0x70602e28  paddub      $a1, $v1, $zero
    ctx->pc = 0x1821acu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x1821b0: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1821b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1821b4: 0x8c26f220  lw          $a2, -0xDE0($at)
    ctx->pc = 0x1821b4u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x47F220u));
    // 0x1821b8: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1821b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1821bc: 0xc42ef1e0  lwc1        $f14, -0xE20($at)
    ctx->pc = 0x1821bcu;
    { uint32_t bits = FAST_READ32(0x47F1E0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x1821c0: 0xc05ed40  jal         func_17B500
    ctx->pc = 0x1821C0u;
    SET_GPR_U32(ctx, 31, 0x1821C8u);
    ctx->pc = 0x17B500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17B500u, 0x1821C0u, 0x1821C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1821C8u;
label_1821c8:
    // 0x1821c8: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x1821c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x1821cc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1821ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1821d0: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x1821d0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x1821d4: 0x30670080  andi        $a3, $v1, 0x80
    ctx->pc = 0x1821d4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x1821d8: 0x14e00005  bnez        $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x1821D8u;
    {
        const bool branch_taken_0x1821d8 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x1821d8) {
            ctx->pc = 0x1821F0u;
            goto label_1821f0;
        }
    }
    ctx->pc = 0x1821E0u;
    // 0x1821e0: 0xc60101b0  lwc1        $f1, 0x1B0($s0)
    ctx->pc = 0x1821e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1821e4: 0xc7a0003c  lwc1        $f0, 0x3C($sp)
    ctx->pc = 0x1821e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1821e8: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1821e8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1821ec: 0xe60101b0  swc1        $f1, 0x1B0($s0)
    ctx->pc = 0x1821ecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 432), bits); }
label_1821f0:
    // 0x1821f0: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1821f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1821f4: 0x8423f138  lh          $v1, -0xEC8($at)
    ctx->pc = 0x1821f4u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x47F138u));
    // 0x1821f8: 0x3343c  dsll32      $a2, $v1, 16
    ctx->pc = 0x1821f8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1821fc: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x1821fcu;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x182200: 0x61900  sll         $v1, $a2, 4
    ctx->pc = 0x182200u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x182204: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x182204u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x182208: 0x33140  sll         $a2, $v1, 5
    ctx->pc = 0x182208u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x18220c: 0x3c03004a  lui         $v1, 0x4A
    ctx->pc = 0x18220cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)74 << 16));
    // 0x182210: 0x24631380  addiu       $v1, $v1, 0x1380
    ctx->pc = 0x182210u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4992));
    // 0x182214: 0x663821  addu        $a3, $v1, $a2
    ctx->pc = 0x182214u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x182218: 0x8ce60158  lw          $a2, 0x158($a3)
    ctx->pc = 0x182218u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 344)));
    // 0x18221c: 0x3c03000c  lui         $v1, 0xC
    ctx->pc = 0x18221cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12 << 16));
    // 0x182220: 0xc33824  and         $a3, $a2, $v1
    ctx->pc = 0x182220u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x182224: 0x3c06000c  lui         $a2, 0xC
    ctx->pc = 0x182224u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)12 << 16));
    // 0x182228: 0x14e6000a  bne         $a3, $a2, . + 4 + (0xA << 2)
    ctx->pc = 0x182228u;
    {
        const bool branch_taken_0x182228 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 6));
        if (branch_taken_0x182228) {
            ctx->pc = 0x182254u;
            goto label_182254;
        }
    }
    ctx->pc = 0x182230u;
    // 0x182230: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x182230u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x182234: 0x8c23f208  lw          $v1, -0xDF8($at)
    ctx->pc = 0x182234u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x47F208u));
    // 0x182238: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x182238u;
    {
        const bool branch_taken_0x182238 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x182238) {
            ctx->pc = 0x182254u;
            goto label_182254;
        }
    }
    ctx->pc = 0x182240u;
    // 0x182240: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x182240u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x182244: 0xc420f1f8  lwc1        $f0, -0xE08($at)
    ctx->pc = 0x182244u;
    { uint32_t bits = FAST_READ32(0x47F1F8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x182248: 0xe60001b0  swc1        $f0, 0x1B0($s0)
    ctx->pc = 0x182248u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 432), bits); }
    // 0x18224c: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x18224cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x182250: 0xac20f208  sw          $zero, -0xDF8($at)
    ctx->pc = 0x182250u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x47F208u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47F208u, _value); } while (0);
label_182254:
    // 0x182254: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x182254u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x182258: 0x8c23f1e8  lw          $v1, -0xE18($at)
    ctx->pc = 0x182258u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x47F1E8u));
    // 0x18225c: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x18225Cu;
    {
        const bool branch_taken_0x18225c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18225c) {
            ctx->pc = 0x1822B8u;
            goto label_1822b8;
        }
    }
    ctx->pc = 0x182264u;
    // 0x182264: 0xc60101b0  lwc1        $f1, 0x1B0($s0)
    ctx->pc = 0x182264u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x182268: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x182268u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x18226c: 0xc420f1f8  lwc1        $f0, -0xE08($at)
    ctx->pc = 0x18226cu;
    { uint32_t bits = FAST_READ32(0x47F1F8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x182270: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x182270u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x182274: 0x0  nop
    ctx->pc = 0x182274u;
    // NOP
    // 0x182278: 0x45000019  bc1f        . + 4 + (0x19 << 2)
    ctx->pc = 0x182278u;
    {
        const bool branch_taken_0x182278 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x182278) {
            ctx->pc = 0x1822E0u;
            goto label_1822e0;
        }
    }
    ctx->pc = 0x182280u;
    // 0x182280: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x182280u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x182284: 0xc420f200  lwc1        $f0, -0xE00($at)
    ctx->pc = 0x182284u;
    { uint32_t bits = FAST_READ32(0x47F200u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x182288: 0xe60001b0  swc1        $f0, 0x1B0($s0)
    ctx->pc = 0x182288u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 432), bits); }
    // 0x18228c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x18228cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x182290: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x182290u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x182294: 0xac660088  sw          $a2, 0x88($v1)
    ctx->pc = 0x182294u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 136), GPR_U32(ctx, 6));
    // 0x182298: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x182298u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18229c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x18229cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1822a0: 0xac660094  sw          $a2, 0x94($v1)
    ctx->pc = 0x1822a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 148), GPR_U32(ctx, 6));
    // 0x1822a4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1822a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1822a8: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1822a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1822ac: 0xac6600b8  sw          $a2, 0xB8($v1)
    ctx->pc = 0x1822acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 184), GPR_U32(ctx, 6));
    // 0x1822b0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1822B0u;
    {
        const bool branch_taken_0x1822b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1822b0) {
            ctx->pc = 0x1822E0u;
            goto label_1822e0;
        }
    }
    ctx->pc = 0x1822B8u;
label_1822b8:
    // 0x1822b8: 0xc60101b0  lwc1        $f1, 0x1B0($s0)
    ctx->pc = 0x1822b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1822bc: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1822bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1822c0: 0xc420f1f8  lwc1        $f0, -0xE08($at)
    ctx->pc = 0x1822c0u;
    { uint32_t bits = FAST_READ32(0x47F1F8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1822c4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1822c4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1822c8: 0x0  nop
    ctx->pc = 0x1822c8u;
    // NOP
    // 0x1822cc: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x1822CCu;
    {
        const bool branch_taken_0x1822cc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1822cc) {
            ctx->pc = 0x1822E0u;
            goto label_1822e0;
        }
    }
    ctx->pc = 0x1822D4u;
    // 0x1822d4: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1822d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1822d8: 0xc420f200  lwc1        $f0, -0xE00($at)
    ctx->pc = 0x1822d8u;
    { uint32_t bits = FAST_READ32(0x47F200u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1822dc: 0xe60001b0  swc1        $f0, 0x1B0($s0)
    ctx->pc = 0x1822dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 432), bits); }
label_1822e0:
    // 0x1822e0: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1822e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1822e4: 0x8427f138  lh          $a3, -0xEC8($at)
    ctx->pc = 0x1822e4u;
    SET_GPR_S32(ctx, 7, (int16_t)FAST_READ16(0x47F138u));
    // 0x1822e8: 0x7343c  dsll32      $a2, $a3, 16
    ctx->pc = 0x1822e8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) << (32 + 16));
    // 0x1822ec: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x1822ecu;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x1822f0: 0x61900  sll         $v1, $a2, 4
    ctx->pc = 0x1822f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x1822f4: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x1822f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1822f8: 0x33940  sll         $a3, $v1, 5
    ctx->pc = 0x1822f8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x1822fc: 0x3c03004a  lui         $v1, 0x4A
    ctx->pc = 0x1822fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)74 << 16));
    // 0x182300: 0x24661380  addiu       $a2, $v1, 0x1380
    ctx->pc = 0x182300u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4992));
    // 0x182304: 0xc71821  addu        $v1, $a2, $a3
    ctx->pc = 0x182304u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x182308: 0x8c630158  lw          $v1, 0x158($v1)
    ctx->pc = 0x182308u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 344)));
    // 0x18230c: 0x306607ff  andi        $a2, $v1, 0x7FF
    ctx->pc = 0x18230cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2047);
    // 0x182310: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x182310u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x182314: 0x14c30041  bne         $a2, $v1, . + 4 + (0x41 << 2)
    ctx->pc = 0x182314u;
    {
        const bool branch_taken_0x182314 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        if (branch_taken_0x182314) {
            ctx->pc = 0x18241Cu;
            goto label_18241c;
        }
    }
    ctx->pc = 0x18231Cu;
    // 0x18231c: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x18231cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x182320: 0x8423f138  lh          $v1, -0xEC8($at)
    ctx->pc = 0x182320u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x47F138u));
    // 0x182324: 0x3343c  dsll32      $a2, $v1, 16
    ctx->pc = 0x182324u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 16));
    // 0x182328: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x182328u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x18232c: 0x61900  sll         $v1, $a2, 4
    ctx->pc = 0x18232cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x182330: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x182330u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x182334: 0x33140  sll         $a2, $v1, 5
    ctx->pc = 0x182334u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x182338: 0x3c03004a  lui         $v1, 0x4A
    ctx->pc = 0x182338u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)74 << 16));
    // 0x18233c: 0x24631380  addiu       $v1, $v1, 0x1380
    ctx->pc = 0x18233cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4992));
    // 0x182340: 0x663021  addu        $a2, $v1, $a2
    ctx->pc = 0x182340u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x182344: 0x260301a0  addiu       $v1, $s0, 0x1A0
    ctx->pc = 0x182344u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 416));
    // 0x182348: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x182348u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x18234c: 0x70c02e28  paddub      $a1, $a2, $zero
    ctx->pc = 0x18234cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x182350: 0xc05ec8c  jal         func_17B230
    ctx->pc = 0x182350u;
    SET_GPR_U32(ctx, 31, 0x182358u);
    ctx->pc = 0x17B230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17B230u, 0x182350u, 0x182358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x182358u;
label_182358:
    // 0x182358: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x182358u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x18235c: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x18235cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x182360: 0x8423f138  lh          $v1, -0xEC8($at)
    ctx->pc = 0x182360u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x47F138u));
    // 0x182364: 0x3343c  dsll32      $a2, $v1, 16
    ctx->pc = 0x182364u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 16));
    // 0x182368: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x182368u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x18236c: 0x61900  sll         $v1, $a2, 4
    ctx->pc = 0x18236cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x182370: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x182370u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x182374: 0x33140  sll         $a2, $v1, 5
    ctx->pc = 0x182374u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x182378: 0x3c03004a  lui         $v1, 0x4A
    ctx->pc = 0x182378u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)74 << 16));
    // 0x18237c: 0x24631380  addiu       $v1, $v1, 0x1380
    ctx->pc = 0x18237cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4992));
    // 0x182380: 0x663021  addu        $a2, $v1, $a2
    ctx->pc = 0x182380u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x182384: 0x24c30090  addiu       $v1, $a2, 0x90
    ctx->pc = 0x182384u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 144));
    // 0x182388: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x182388u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x18238c: 0x26060190  addiu       $a2, $s0, 0x190
    ctx->pc = 0x18238cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 400));
    // 0x182390: 0x7cc30000  sq          $v1, 0x0($a2)
    ctx->pc = 0x182390u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 3));
    // 0x182394: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x182394u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x182398: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x182398u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18239c: 0x0  nop
    ctx->pc = 0x18239cu;
    // NOP
    // 0x1823a0: 0xe600019c  swc1        $f0, 0x19C($s0)
    ctx->pc = 0x1823a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 412), bits); }
    // 0x1823a4: 0x26030190  addiu       $v1, $s0, 0x190
    ctx->pc = 0x1823a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 400));
    // 0x1823a8: 0x78660000  lq          $a2, 0x0($v1)
    ctx->pc = 0x1823a8u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1823ac: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1823acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1823b0: 0x24670030  addiu       $a3, $v1, 0x30
    ctx->pc = 0x1823b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x1823b4: 0x7ce60000  sq          $a2, 0x0($a3)
    ctx->pc = 0x1823b4u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 6));
    // 0x1823b8: 0x260301a0  addiu       $v1, $s0, 0x1A0
    ctx->pc = 0x1823b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 416));
    // 0x1823bc: 0x78660000  lq          $a2, 0x0($v1)
    ctx->pc = 0x1823bcu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1823c0: 0x8fa70058  lw          $a3, 0x58($sp)
    ctx->pc = 0x1823c0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1823c4: 0x24e30050  addiu       $v1, $a3, 0x50
    ctx->pc = 0x1823c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 80));
    // 0x1823c8: 0x7c660000  sq          $a2, 0x0($v1)
    ctx->pc = 0x1823c8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 6));
    // 0x1823cc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1823ccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1823d0: 0x8fa60058  lw          $a2, 0x58($sp)
    ctx->pc = 0x1823d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1823d4: 0xe4c00074  swc1        $f0, 0x74($a2)
    ctx->pc = 0x1823d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 116), bits); }
    // 0x1823d8: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1823d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1823dc: 0x8c6300b8  lw          $v1, 0xB8($v1)
    ctx->pc = 0x1823dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 184)));
    // 0x1823e0: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1823E0u;
    {
        const bool branch_taken_0x1823e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1823e0) {
            ctx->pc = 0x1823F4u;
            goto label_1823f4;
        }
    }
    ctx->pc = 0x1823E8u;
    // 0x1823e8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1823e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1823ec: 0x8fa60058  lw          $a2, 0x58($sp)
    ctx->pc = 0x1823ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1823f0: 0xacc700b8  sw          $a3, 0xB8($a2)
    ctx->pc = 0x1823f0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 184), GPR_U32(ctx, 7));
label_1823f4:
    // 0x1823f4: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1823f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1823f8: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x1823f8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x1823fc: 0xc05f8f8  jal         func_17E3E0
    ctx->pc = 0x1823FCu;
    SET_GPR_U32(ctx, 31, 0x182404u);
    ctx->pc = 0x17E3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17E3E0u, 0x1823FCu, 0x182404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x182404u;
label_182404:
    // 0x182404: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x182404u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x182408: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x182408u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x18240c: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x18240cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x182410: 0xc05f910  jal         func_17E440
    ctx->pc = 0x182410u;
    SET_GPR_U32(ctx, 31, 0x182418u);
    ctx->pc = 0x17E440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17E440u, 0x182410u, 0x182418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x182418u;
label_182418:
    // 0x182418: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x182418u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_18241c:
    // 0x18241c: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x18241cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x182420: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x182420u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x182424: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x182424u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x182428: 0x3e00008  jr          $ra
    ctx->pc = 0x182428u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x182428u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x182430u;
}
