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

// Function: Mk_index_data_obj
// Address: 0x1e0130 - 0x1e04bc
void Mk_index_data_obj_0x1e0130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Mk_index_data_obj_0x1e0130");
#endif

    switch (ctx->pc) {
        case 0x1e01ecu: goto label_1e01ec;
        case 0x1e0250u: goto label_1e0250;
        case 0x1e0290u: goto label_1e0290;
        case 0x1e02a4u: goto label_1e02a4;
        case 0x1e02d0u: goto label_1e02d0;
        case 0x1e030cu: goto label_1e030c;
        case 0x1e0328u: goto label_1e0328;
        case 0x1e03c0u: goto label_1e03c0;
        default: break;
    }

    ctx->pc = 0x1e0130u;

    // 0x1e0130: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x1e0130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x1e0134: 0x7fbf0090  sq          $ra, 0x90($sp)
    ctx->pc = 0x1e0134u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 31));
    // 0x1e0138: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x1e0138u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x1e013c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1e013cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x1e0140: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1e0140u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1e0144: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1e0144u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1e0148: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1e0148u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1e014c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1e014cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1e0150: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1e0150u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1e0154: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e0154u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1e0158: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e0158u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e015c: 0xafa400c0  sw          $a0, 0xC0($sp)
    ctx->pc = 0x1e015cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 4));
    // 0x1e0160: 0xafa500c8  sw          $a1, 0xC8($sp)
    ctx->pc = 0x1e0160u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 5));
    // 0x1e0164: 0xffa600d0  sd          $a2, 0xD0($sp)
    ctx->pc = 0x1e0164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 6));
    // 0x1e0168: 0xffa700d8  sd          $a3, 0xD8($sp)
    ctx->pc = 0x1e0168u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 216), GPR_U64(ctx, 7));
    // 0x1e016c: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x1e016cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1e0170: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x1e0170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1e0174: 0xac430068  sw          $v1, 0x68($v0)
    ctx->pc = 0x1e0174u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 104), GPR_U32(ctx, 3));
    // 0x1e0178: 0x8fb000c8  lw          $s0, 0xC8($sp)
    ctx->pc = 0x1e0178u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1e017c: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x1e017cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1e0180: 0x8c510028  lw          $s1, 0x28($v0)
    ctx->pc = 0x1e0180u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x1e0184: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x1e0184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1e0188: 0x8c420030  lw          $v0, 0x30($v0)
    ctx->pc = 0x1e0188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1e018c: 0xafa200a4  sw          $v0, 0xA4($sp)
    ctx->pc = 0x1e018cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 2));
    // 0x1e0190: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x1e0190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1e0194: 0x8c560038  lw          $s6, 0x38($v0)
    ctx->pc = 0x1e0194u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x1e0198: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x1e0198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1e019c: 0x8c420050  lw          $v0, 0x50($v0)
    ctx->pc = 0x1e019cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x1e01a0: 0xafa200ac  sw          $v0, 0xAC($sp)
    ctx->pc = 0x1e01a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 2));
    // 0x1e01a4: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x1e01a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1e01a8: 0x8c420040  lw          $v0, 0x40($v0)
    ctx->pc = 0x1e01a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x1e01ac: 0xafa200a8  sw          $v0, 0xA8($sp)
    ctx->pc = 0x1e01acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 2));
    // 0x1e01b0: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x1e01b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1e01b4: 0x8c540048  lw          $s4, 0x48($v0)
    ctx->pc = 0x1e01b4u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x1e01b8: 0x26310018  addiu       $s1, $s1, 0x18
    ctx->pc = 0x1e01b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
    // 0x1e01bc: 0x8fa200a4  lw          $v0, 0xA4($sp)
    ctx->pc = 0x1e01bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
    // 0x1e01c0: 0x24420018  addiu       $v0, $v0, 0x18
    ctx->pc = 0x1e01c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x1e01c4: 0xafa200a4  sw          $v0, 0xA4($sp)
    ctx->pc = 0x1e01c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 2));
    // 0x1e01c8: 0x26d60008  addiu       $s6, $s6, 0x8
    ctx->pc = 0x1e01c8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
    // 0x1e01cc: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x1e01ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x1e01d0: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x1e01d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x1e01d4: 0xafa200a8  sw          $v0, 0xA8($sp)
    ctx->pc = 0x1e01d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 2));
    // 0x1e01d8: 0x26940004  addiu       $s4, $s4, 0x4
    ctx->pc = 0x1e01d8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
    // 0x1e01dc: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x1e01dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1e01e0: 0x8c420020  lw          $v0, 0x20($v0)
    ctx->pc = 0x1e01e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x1e01e4: 0x245efffe  addiu       $fp, $v0, -0x2
    ctx->pc = 0x1e01e4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
    // 0x1e01e8: 0xafa000b0  sw          $zero, 0xB0($sp)
    ctx->pc = 0x1e01e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 0));
label_1e01ec:
    // 0x1e01ec: 0x96820000  lhu         $v0, 0x0($s4)
    ctx->pc = 0x1e01ecu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1e01f0: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1e01f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1e01f4: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x1e01f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x1e01f8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E01F8u;
    {
        const bool branch_taken_0x1e01f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e01f8) {
            ctx->pc = 0x1E0210u;
            goto label_1e0210;
        }
    }
    ctx->pc = 0x1E0200u;
    // 0x1e0200: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1e0200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1e0204: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1e0204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1e0208: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x1e0208u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
    // 0x1e020c: 0x0  nop
    ctx->pc = 0x1e020cu;
    // NOP
label_1e0210:
    // 0x1e0210: 0x26940002  addiu       $s4, $s4, 0x2
    ctx->pc = 0x1e0210u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 2));
    // 0x1e0214: 0x27deffff  addiu       $fp, $fp, -0x1
    ctx->pc = 0x1e0214u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 4294967295));
    // 0x1e0218: 0x17c0fff4  bnez        $fp, . + 4 + (-0xC << 2)
    ctx->pc = 0x1E0218u;
    {
        const bool branch_taken_0x1e0218 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e0218) {
            ctx->pc = 0x1E01ECu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e01ec;
        }
    }
    ctx->pc = 0x1E0220u;
    // 0x1e0220: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x1e0220u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1e0224: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x1e0224u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1e0228: 0xac43006c  sw          $v1, 0x6C($v0)
    ctx->pc = 0x1e0228u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 108), GPR_U32(ctx, 3));
    // 0x1e022c: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x1e022cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1e0230: 0xac500078  sw          $s0, 0x78($v0)
    ctx->pc = 0x1e0230u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 120), GPR_U32(ctx, 16));
    // 0x1e0234: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x1e0234u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1e0238: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x1e0238u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1e023c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e023cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e0240: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1e0240u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1e0244: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1e0244u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1e0248: 0xafa200c8  sw          $v0, 0xC8($sp)
    ctx->pc = 0x1e0248u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 2));
    // 0x1e024c: 0xafa000a0  sw          $zero, 0xA0($sp)
    ctx->pc = 0x1e024cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 0));
label_1e0250:
    // 0x1e0250: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x1e0250u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1e0254: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x1e0254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1e0258: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1e0258u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e025c: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x1e025cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1e0260: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e0260u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e0264: 0xac440070  sw          $a0, 0x70($v0)
    ctx->pc = 0x1e0264u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 112), GPR_U32(ctx, 4));
    // 0x1e0268: 0x8fb200c8  lw          $s2, 0xC8($sp)
    ctx->pc = 0x1e0268u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1e026c: 0xafb200b4  sw          $s2, 0xB4($sp)
    ctx->pc = 0x1e026cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 18));
    // 0x1e0270: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x1e0270u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x1e0274: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x1e0274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1e0278: 0x72402628  paddub      $a0, $s2, $zero
    ctx->pc = 0x1e0278u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x1e027c: 0xdc450008  ld          $a1, 0x8($v0)
    ctx->pc = 0x1e027cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1e0280: 0xdfa600d0  ld          $a2, 0xD0($sp)
    ctx->pc = 0x1e0280u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1e0284: 0xdfa700d8  ld          $a3, 0xD8($sp)
    ctx->pc = 0x1e0284u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1e0288: 0xc077f08  jal         func_1DFC20
    ctx->pc = 0x1E0288u;
    SET_GPR_U32(ctx, 31, 0x1E0290u);
    ctx->pc = 0x1DFC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DFC20u, 0x1E0288u, 0x1E0290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0290u;
label_1e0290:
    // 0x1e0290: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x1e0290u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1e0294: 0x72402628  paddub      $a0, $s2, $zero
    ctx->pc = 0x1e0294u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x1e0298: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x1e0298u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1e029c: 0xc077f3c  jal         func_1DFCF0
    ctx->pc = 0x1E029Cu;
    SET_GPR_U32(ctx, 31, 0x1E02A4u);
    ctx->pc = 0x1DFCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DFCF0u, 0x1E029Cu, 0x1E02A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E02A4u;
label_1e02a4:
    // 0x1e02a4: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x1e02a4u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1e02a8: 0x8fa200b4  lw          $v0, 0xB4($sp)
    ctx->pc = 0x1e02a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x1e02ac: 0x2421023  subu        $v0, $s2, $v0
    ctx->pc = 0x1e02acu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1e02b0: 0x2457fff0  addiu       $s7, $v0, -0x10
    ctx->pc = 0x1e02b0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
    // 0x1e02b4: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x1e02b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1e02b8: 0x8c540048  lw          $s4, 0x48($v0)
    ctx->pc = 0x1e02b8u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x1e02bc: 0x26940004  addiu       $s4, $s4, 0x4
    ctx->pc = 0x1e02bcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
    // 0x1e02c0: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x1e02c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1e02c4: 0x8c420020  lw          $v0, 0x20($v0)
    ctx->pc = 0x1e02c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x1e02c8: 0x245efffe  addiu       $fp, $v0, -0x2
    ctx->pc = 0x1e02c8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
    // 0x1e02cc: 0x24150002  addiu       $s5, $zero, 0x2
    ctx->pc = 0x1e02ccu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1e02d0:
    // 0x1e02d0: 0x96820000  lhu         $v0, 0x0($s4)
    ctx->pc = 0x1e02d0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1e02d4: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1e02d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1e02d8: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x1e02d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x1e02dc: 0x1440003a  bnez        $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x1E02DCu;
    {
        const bool branch_taken_0x1e02dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e02dc) {
            ctx->pc = 0x1E03C8u;
            goto label_1e03c8;
        }
    }
    ctx->pc = 0x1E02E4u;
    // 0x1e02e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e02e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e02e8: 0xae020108  sw          $v0, 0x108($s0)
    ctx->pc = 0x1e02e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 264), GPR_U32(ctx, 2));
    // 0x1e02ec: 0x26a2fffe  addiu       $v0, $s5, -0x2
    ctx->pc = 0x1e02ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967294));
    // 0x1e02f0: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1e02f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1e02f4: 0xa6020100  sh          $v0, 0x100($s0)
    ctx->pc = 0x1e02f4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 256), (uint16_t)GPR_U32(ctx, 2));
    // 0x1e02f8: 0xae12010c  sw          $s2, 0x10C($s0)
    ctx->pc = 0x1e02f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 18));
    // 0x1e02fc: 0x72402628  paddub      $a0, $s2, $zero
    ctx->pc = 0x1e02fcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x1e0300: 0x26c5fff8  addiu       $a1, $s6, -0x8
    ctx->pc = 0x1e0300u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967288));
    // 0x1e0304: 0xc078248  jal         func_1E0920
    ctx->pc = 0x1E0304u;
    SET_GPR_U32(ctx, 31, 0x1E030Cu);
    ctx->pc = 0x1E0920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E0920u, 0x1E0304u, 0x1E030Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E030Cu;
label_1e030c:
    // 0x1e030c: 0x70409e28  paddub      $s3, $v0, $zero
    ctx->pc = 0x1e030cu;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1e0310: 0x2721023  subu        $v0, $s3, $s2
    ctx->pc = 0x1e0310u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
    // 0x1e0314: 0x2e2b821  addu        $s7, $s7, $v0
    ctx->pc = 0x1e0314u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x1e0318: 0x72609628  paddub      $s2, $s3, $zero
    ctx->pc = 0x1e0318u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x1e031c: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x1e031cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1e0320: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x1E0320u;
    SET_GPR_U32(ctx, 31, 0x1E0328u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x1E0328u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1E0328u) { return; }
    ctx->pc = 0x1E0328u;
label_1e0328:
    // 0x1e0328: 0xc621ffe8  lwc1        $f1, -0x18($s1)
    ctx->pc = 0x1e0328u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4294967272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e032c: 0xc620fff4  lwc1        $f0, -0xC($s1)
    ctx->pc = 0x1e032cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4294967284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e0330: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1e0330u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1e0334: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x1e0334u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e0338: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x1e0338u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1e033c: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1e033cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x1e0340: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e0340u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e0344: 0x0  nop
    ctx->pc = 0x1e0344u;
    // NOP
    // 0x1e0348: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1e0348u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1e034c: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x1e034cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x1e0350: 0xc621ffec  lwc1        $f1, -0x14($s1)
    ctx->pc = 0x1e0350u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4294967276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e0354: 0xc620fff8  lwc1        $f0, -0x8($s1)
    ctx->pc = 0x1e0354u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4294967288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e0358: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1e0358u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1e035c: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x1e035cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e0360: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x1e0360u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1e0364: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1e0364u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x1e0368: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e0368u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e036c: 0x0  nop
    ctx->pc = 0x1e036cu;
    // NOP
    // 0x1e0370: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1e0370u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1e0374: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x1e0374u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x1e0378: 0xc621fff0  lwc1        $f1, -0x10($s1)
    ctx->pc = 0x1e0378u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4294967280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e037c: 0xc620fffc  lwc1        $f0, -0x4($s1)
    ctx->pc = 0x1e037cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e0380: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1e0380u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1e0384: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x1e0384u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e0388: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x1e0388u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1e038c: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1e038cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x1e0390: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e0390u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e0394: 0x0  nop
    ctx->pc = 0x1e0394u;
    // NOP
    // 0x1e0398: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1e0398u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1e039c: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x1e039cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    // 0x1e03a0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1e03a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1e03a4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e03a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e03a8: 0x0  nop
    ctx->pc = 0x1e03a8u;
    // NOP
    // 0x1e03ac: 0xe600003c  swc1        $f0, 0x3C($s0)
    ctx->pc = 0x1e03acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 60), bits); }
    // 0x1e03b0: 0x26040080  addiu       $a0, $s0, 0x80
    ctx->pc = 0x1e03b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x1e03b4: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x1e03b4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1e03b8: 0xc040c44  jal         func_103110
    ctx->pc = 0x1E03B8u;
    SET_GPR_U32(ctx, 31, 0x1E03C0u);
    ctx->pc = 0x103110u;
    {
        ctx->pc = 0x1E03C0u;
        ps2_stubs::sceVu0InversMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1E03C0u) { return; }
    ctx->pc = 0x1E03C0u;
label_1e03c0:
    // 0x1e03c0: 0x26100110  addiu       $s0, $s0, 0x110
    ctx->pc = 0x1e03c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
    // 0x1e03c4: 0x0  nop
    ctx->pc = 0x1e03c4u;
    // NOP
label_1e03c8:
    // 0x1e03c8: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x1e03c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x1e03cc: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1e03ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1e03d0: 0xafa200a8  sw          $v0, 0xA8($sp)
    ctx->pc = 0x1e03d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 2));
    // 0x1e03d4: 0x26940002  addiu       $s4, $s4, 0x2
    ctx->pc = 0x1e03d4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 2));
    // 0x1e03d8: 0x26d60004  addiu       $s6, $s6, 0x4
    ctx->pc = 0x1e03d8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
    // 0x1e03dc: 0x2631000c  addiu       $s1, $s1, 0xC
    ctx->pc = 0x1e03dcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    // 0x1e03e0: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x1e03e0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x1e03e4: 0x27deffff  addiu       $fp, $fp, -0x1
    ctx->pc = 0x1e03e4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 4294967295));
    // 0x1e03e8: 0x17c0ffb9  bnez        $fp, . + 4 + (-0x47 << 2)
    ctx->pc = 0x1E03E8u;
    {
        const bool branch_taken_0x1e03e8 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e03e8) {
            ctx->pc = 0x1E02D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e02d0;
        }
    }
    ctx->pc = 0x1E03F0u;
    // 0x1e03f0: 0x32e2000f  andi        $v0, $s7, 0xF
    ctx->pc = 0x1e03f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)15);
    // 0x1e03f4: 0xafa200b8  sw          $v0, 0xB8($sp)
    ctx->pc = 0x1e03f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 2));
    // 0x1e03f8: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x1e03f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1e03fc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E03FCu;
    {
        const bool branch_taken_0x1e03fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e03fc) {
            ctx->pc = 0x1E0418u;
            goto label_1e0418;
        }
    }
    ctx->pc = 0x1E0404u;
    // 0x1e0404: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x1e0404u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1e0408: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x1e0408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1e040c: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x1e040cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1e0410: 0x2e2b821  addu        $s7, $s7, $v0
    ctx->pc = 0x1e0410u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x1e0414: 0x0  nop
    ctx->pc = 0x1e0414u;
    // NOP
label_1e0418:
    // 0x1e0418: 0x3242000f  andi        $v0, $s2, 0xF
    ctx->pc = 0x1e0418u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)15);
    // 0x1e041c: 0xafa200bc  sw          $v0, 0xBC($sp)
    ctx->pc = 0x1e041cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 2));
    // 0x1e0420: 0x8fa200bc  lw          $v0, 0xBC($sp)
    ctx->pc = 0x1e0420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x1e0424: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E0424u;
    {
        const bool branch_taken_0x1e0424 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e0424) {
            ctx->pc = 0x1E0440u;
            goto label_1e0440;
        }
    }
    ctx->pc = 0x1E042Cu;
    // 0x1e042c: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x1e042cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1e0430: 0x8fa200bc  lw          $v0, 0xBC($sp)
    ctx->pc = 0x1e0430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x1e0434: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x1e0434u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1e0438: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x1e0438u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1e043c: 0x0  nop
    ctx->pc = 0x1e043cu;
    // NOP
label_1e0440:
    // 0x1e0440: 0x171102  srl         $v0, $s7, 4
    ctx->pc = 0x1e0440u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 23), 4));
    // 0x1e0444: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1e0444u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1e0448: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1e0448u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1e044c: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x1e044cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x1e0450: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1e0450u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1e0454: 0x8fa200b4  lw          $v0, 0xB4($sp)
    ctx->pc = 0x1e0454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x1e0458: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x1e0458u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x1e045c: 0x8fa200b4  lw          $v0, 0xB4($sp)
    ctx->pc = 0x1e045cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x1e0460: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x1e0460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x1e0464: 0xfc400000  sd          $zero, 0x0($v0)
    ctx->pc = 0x1e0464u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 0));
    // 0x1e0468: 0xafb200c8  sw          $s2, 0xC8($sp)
    ctx->pc = 0x1e0468u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 18));
    // 0x1e046c: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x1e046cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1e0470: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1e0470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1e0474: 0xafa200a0  sw          $v0, 0xA0($sp)
    ctx->pc = 0x1e0474u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
    // 0x1e0478: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x1e0478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1e047c: 0x1040ff74  beqz        $v0, . + 4 + (-0x8C << 2)
    ctx->pc = 0x1E047Cu;
    {
        const bool branch_taken_0x1e047c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e047c) {
            ctx->pc = 0x1E0250u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e0250;
        }
    }
    ctx->pc = 0x1E0484u;
    // 0x1e0484: 0x72401628  paddub      $v0, $s2, $zero
    ctx->pc = 0x1e0484u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x1e0488: 0x7bbf0090  lq          $ra, 0x90($sp)
    ctx->pc = 0x1e0488u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1e048c: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x1e048cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1e0490: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1e0490u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1e0494: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1e0494u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1e0498: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1e0498u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e049c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1e049cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e04a0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1e04a0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e04a4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1e04a4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e04a8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e04a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e04ac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e04acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e04b0: 0x27bd00e0  addiu       $sp, $sp, 0xE0
    ctx->pc = 0x1e04b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1e04b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1E04B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E04B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E04BCu;
}
