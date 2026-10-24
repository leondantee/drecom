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

// Function: Message_init
// Address: 0x296060 - 0x296354
void Message_init_0x296060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Message_init_0x296060");
#endif

    switch (ctx->pc) {
        case 0x2960b8u: goto label_2960b8;
        case 0x2960ecu: goto label_2960ec;
        case 0x2960f8u: goto label_2960f8;
        case 0x296134u: goto label_296134;
        case 0x296170u: goto label_296170;
        case 0x296314u: goto label_296314;
        default: break;
    }

    ctx->pc = 0x296060u;

    // 0x296060: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x296060u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x296064: 0x7fbf0040  sq          $ra, 0x40($sp)
    ctx->pc = 0x296064u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 31));
    // 0x296068: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x296068u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x29606c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x29606cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x296070: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x296070u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x296074: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x296074u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x296078: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x296078u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x29607c: 0x24520080  addiu       $s2, $v0, 0x80
    ctx->pc = 0x29607cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x296080: 0x3c020081  lui         $v0, 0x81
    ctx->pc = 0x296080u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)129 << 16));
    // 0x296084: 0x2451cb10  addiu       $s1, $v0, -0x34F0
    ctx->pc = 0x296084u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953744));
    // 0x296088: 0x8e420a68  lw          $v0, 0xA68($s2)
    ctx->pc = 0x296088u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x29608c: 0x2443000f  addiu       $v1, $v0, 0xF
    ctx->pc = 0x29608cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x296090: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x296090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x296094: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x296094u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x296098: 0xae420a68  sw          $v0, 0xA68($s2)
    ctx->pc = 0x296098u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2664), GPR_U32(ctx, 2));
    // 0x29609c: 0x8e420a68  lw          $v0, 0xA68($s2)
    ctx->pc = 0x29609cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2664)));
    // 0x2960a0: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2960a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x2960a4: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2960a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2960a8: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x2960a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x2960ac: 0x24060081  addiu       $a2, $zero, 0x81
    ctx->pc = 0x2960acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 129));
    // 0x2960b0: 0xc0764e0  jal         func_1D9380
    ctx->pc = 0x2960B0u;
    SET_GPR_U32(ctx, 31, 0x2960B8u);
    ctx->pc = 0x1D9380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9380u, 0x2960B0u, 0x2960B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2960B8u;
label_2960b8:
    // 0x2960b8: 0x70409e28  paddub      $s3, $v0, $zero
    ctx->pc = 0x2960b8u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2960bc: 0x12600004  beqz        $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x2960BCu;
    {
        const bool branch_taken_0x2960bc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x2960bc) {
            ctx->pc = 0x2960D0u;
            goto label_2960d0;
        }
    }
    ctx->pc = 0x2960C4u;
    // 0x2960c4: 0x8e420a68  lw          $v0, 0xA68($s2)
    ctx->pc = 0x2960c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2664)));
    // 0x2960c8: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x2960c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x2960cc: 0xae420a68  sw          $v0, 0xA68($s2)
    ctx->pc = 0x2960ccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2664), GPR_U32(ctx, 2));
label_2960d0:
    // 0x2960d0: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2960d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2960d4: 0x240400b9  addiu       $a0, $zero, 0xB9
    ctx->pc = 0x2960d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 185));
    // 0x2960d8: 0x24061400  addiu       $a2, $zero, 0x1400
    ctx->pc = 0x2960d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5120));
    // 0x2960dc: 0x2407008e  addiu       $a3, $zero, 0x8E
    ctx->pc = 0x2960dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 142));
    // 0x2960e0: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x2960e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2960e4: 0xc05e858  jal         func_17A160
    ctx->pc = 0x2960E4u;
    SET_GPR_U32(ctx, 31, 0x2960ECu);
    ctx->pc = 0x17A160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A160u, 0x2960E4u, 0x2960ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2960ECu;
label_2960ec:
    // 0x2960ec: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x2960ecu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2960f0: 0x10000079  b           . + 4 + (0x79 << 2)
    ctx->pc = 0x2960F0u;
    {
        const bool branch_taken_0x2960f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2960f0) {
            ctx->pc = 0x2962D8u;
            goto label_2962d8;
        }
    }
    ctx->pc = 0x2960F8u;
label_2960f8:
    // 0x2960f8: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x2960f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2960fc: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2960fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x296100: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x296100u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x296104: 0x2222021  addu        $a0, $s1, $v0
    ctx->pc = 0x296104u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x296108: 0x260300b9  addiu       $v1, $s0, 0xB9
    ctx->pc = 0x296108u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 185));
    // 0x29610c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x29610cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x296110: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x296110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x296114: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x296114u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x296118: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x296118u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x29611c: 0x2442cca0  addiu       $v0, $v0, -0x3360
    ctx->pc = 0x29611cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954144));
    // 0x296120: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x296120u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x296124: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x296124u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x296128: 0x24060028  addiu       $a2, $zero, 0x28
    ctx->pc = 0x296128u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x29612c: 0xc0462a6  jal         func_118A98
    ctx->pc = 0x29612Cu;
    SET_GPR_U32(ctx, 31, 0x296134u);
    ctx->pc = 0x118A98u;
    {
        ctx->pc = 0x296134u;
        ps2_stubs::memcpy(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x296134u) { return; }
    ctx->pc = 0x296134u;
label_296134:
    // 0x296134: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x296134u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x296138: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x296138u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x29613c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x29613cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x296140: 0x2222021  addu        $a0, $s1, $v0
    ctx->pc = 0x296140u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x296144: 0x260300b9  addiu       $v1, $s0, 0xB9
    ctx->pc = 0x296144u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 185));
    // 0x296148: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x296148u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x29614c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x29614cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x296150: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x296150u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x296154: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x296154u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x296158: 0x2442cca0  addiu       $v0, $v0, -0x3360
    ctx->pc = 0x296158u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954144));
    // 0x29615c: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x29615cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x296160: 0x24840030  addiu       $a0, $a0, 0x30
    ctx->pc = 0x296160u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x296164: 0x24060028  addiu       $a2, $zero, 0x28
    ctx->pc = 0x296164u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x296168: 0xc0462a6  jal         func_118A98
    ctx->pc = 0x296168u;
    SET_GPR_U32(ctx, 31, 0x296170u);
    ctx->pc = 0x118A98u;
    {
        ctx->pc = 0x296170u;
        ps2_stubs::memcpy(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x296170u) { return; }
    ctx->pc = 0x296170u;
label_296170:
    // 0x296170: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x296170u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x296174: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x296174u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x296178: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x296178u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x29617c: 0x2222821  addu        $a1, $s1, $v0
    ctx->pc = 0x29617cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x296180: 0x90a40027  lbu         $a0, 0x27($a1)
    ctx->pc = 0x296180u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 39)));
    // 0x296184: 0x3003001f  andi        $v1, $zero, 0x1F
    ctx->pc = 0x296184u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)31);
    // 0x296188: 0x2402ffe0  addiu       $v0, $zero, -0x20
    ctx->pc = 0x296188u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967264));
    // 0x29618c: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x29618cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x296190: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x296190u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x296194: 0xa0a20027  sb          $v0, 0x27($a1)
    ctx->pc = 0x296194u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 39), (uint8_t)GPR_U32(ctx, 2));
    // 0x296198: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x296198u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29619c: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x29619cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2961a0: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2961a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2961a4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2961a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2961a8: 0x2222821  addu        $a1, $s1, $v0
    ctx->pc = 0x2961a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2961ac: 0x90a4004f  lbu         $a0, 0x4F($a1)
    ctx->pc = 0x2961acu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 79)));
    // 0x2961b0: 0x3063001f  andi        $v1, $v1, 0x1F
    ctx->pc = 0x2961b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
    // 0x2961b4: 0x2402ffe0  addiu       $v0, $zero, -0x20
    ctx->pc = 0x2961b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967264));
    // 0x2961b8: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x2961b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x2961bc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2961bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2961c0: 0xa0a2004f  sb          $v0, 0x4F($a1)
    ctx->pc = 0x2961c0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 79), (uint8_t)GPR_U32(ctx, 2));
    // 0x2961c4: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x2961c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2961c8: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2961c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2961cc: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2961ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2961d0: 0x2222821  addu        $a1, $s1, $v0
    ctx->pc = 0x2961d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2961d4: 0x90a40027  lbu         $a0, 0x27($a1)
    ctx->pc = 0x2961d4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 39)));
    // 0x2961d8: 0x30020007  andi        $v0, $zero, 0x7
    ctx->pc = 0x2961d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)7);
    // 0x2961dc: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x2961dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x2961e0: 0x2402ff1f  addiu       $v0, $zero, -0xE1
    ctx->pc = 0x2961e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967071));
    // 0x2961e4: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x2961e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x2961e8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2961e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2961ec: 0xa0a20027  sb          $v0, 0x27($a1)
    ctx->pc = 0x2961ecu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 39), (uint8_t)GPR_U32(ctx, 2));
    // 0x2961f0: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x2961f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2961f4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2961f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2961f8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2961f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2961fc: 0x2222821  addu        $a1, $s1, $v0
    ctx->pc = 0x2961fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x296200: 0x90a4004f  lbu         $a0, 0x4F($a1)
    ctx->pc = 0x296200u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 79)));
    // 0x296204: 0x30020007  andi        $v0, $zero, 0x7
    ctx->pc = 0x296204u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)7);
    // 0x296208: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x296208u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x29620c: 0x2402ff1f  addiu       $v0, $zero, -0xE1
    ctx->pc = 0x29620cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967071));
    // 0x296210: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x296210u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x296214: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x296214u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x296218: 0xa0a2004f  sb          $v0, 0x4F($a1)
    ctx->pc = 0x296218u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 79), (uint8_t)GPR_U32(ctx, 2));
    // 0x29621c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x29621cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x296220: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x296220u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x296224: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x296224u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x296228: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x296228u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x29622c: 0x2222821  addu        $a1, $s1, $v0
    ctx->pc = 0x29622cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x296230: 0x90a40024  lbu         $a0, 0x24($a1)
    ctx->pc = 0x296230u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 36)));
    // 0x296234: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x296234u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x296238: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x296238u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x29623c: 0x2402fffb  addiu       $v0, $zero, -0x5
    ctx->pc = 0x29623cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x296240: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x296240u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x296244: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x296244u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x296248: 0xa0a20024  sb          $v0, 0x24($a1)
    ctx->pc = 0x296248u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 36), (uint8_t)GPR_U32(ctx, 2));
    // 0x29624c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x29624cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x296250: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x296250u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x296254: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x296254u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x296258: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x296258u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x29625c: 0x2222821  addu        $a1, $s1, $v0
    ctx->pc = 0x29625cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x296260: 0x90a4004c  lbu         $a0, 0x4C($a1)
    ctx->pc = 0x296260u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 76)));
    // 0x296264: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x296264u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x296268: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x296268u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x29626c: 0x2402fffb  addiu       $v0, $zero, -0x5
    ctx->pc = 0x29626cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x296270: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x296270u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x296274: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x296274u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x296278: 0xa0a2004c  sb          $v0, 0x4C($a1)
    ctx->pc = 0x296278u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 76), (uint8_t)GPR_U32(ctx, 2));
    // 0x29627c: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x29627cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x296280: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x296280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x296284: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x296284u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x296288: 0x2222821  addu        $a1, $s1, $v0
    ctx->pc = 0x296288u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x29628c: 0x90a40024  lbu         $a0, 0x24($a1)
    ctx->pc = 0x29628cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 36)));
    // 0x296290: 0x30020003  andi        $v0, $zero, 0x3
    ctx->pc = 0x296290u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)3);
    // 0x296294: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x296294u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x296298: 0x2402ffe7  addiu       $v0, $zero, -0x19
    ctx->pc = 0x296298u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967271));
    // 0x29629c: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x29629cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x2962a0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2962a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2962a4: 0xa0a20024  sb          $v0, 0x24($a1)
    ctx->pc = 0x2962a4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 36), (uint8_t)GPR_U32(ctx, 2));
    // 0x2962a8: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x2962a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2962ac: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2962acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2962b0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2962b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2962b4: 0x2222821  addu        $a1, $s1, $v0
    ctx->pc = 0x2962b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2962b8: 0x90a4004c  lbu         $a0, 0x4C($a1)
    ctx->pc = 0x2962b8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 76)));
    // 0x2962bc: 0x30020003  andi        $v0, $zero, 0x3
    ctx->pc = 0x2962bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)3);
    // 0x2962c0: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x2962c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2962c4: 0x2402ffe7  addiu       $v0, $zero, -0x19
    ctx->pc = 0x2962c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967271));
    // 0x2962c8: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x2962c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x2962cc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2962ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2962d0: 0xa0a2004c  sb          $v0, 0x4C($a1)
    ctx->pc = 0x2962d0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 76), (uint8_t)GPR_U32(ctx, 2));
    // 0x2962d4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2962d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2962d8:
    // 0x2962d8: 0x2e020002  sltiu       $v0, $s0, 0x2
    ctx->pc = 0x2962d8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2962dc: 0x1440ff86  bnez        $v0, . + 4 + (-0x7A << 2)
    ctx->pc = 0x2962DCu;
    {
        const bool branch_taken_0x2962dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2962dc) {
            ctx->pc = 0x2960F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2960f8;
        }
    }
    ctx->pc = 0x2962E4u;
    // 0x2962e4: 0x8e420a68  lw          $v0, 0xA68($s2)
    ctx->pc = 0x2962e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2664)));
    // 0x2962e8: 0x2443000f  addiu       $v1, $v0, 0xF
    ctx->pc = 0x2962e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x2962ec: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x2962ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x2962f0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2962f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2962f4: 0xae420a68  sw          $v0, 0xA68($s2)
    ctx->pc = 0x2962f4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2664), GPR_U32(ctx, 2));
    // 0x2962f8: 0x8e420a68  lw          $v0, 0xA68($s2)
    ctx->pc = 0x2962f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2664)));
    // 0x2962fc: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x2962fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x296300: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x296300u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x296304: 0x2404003d  addiu       $a0, $zero, 0x3D
    ctx->pc = 0x296304u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
    // 0x296308: 0x24060081  addiu       $a2, $zero, 0x81
    ctx->pc = 0x296308u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 129));
    // 0x29630c: 0xc0764e0  jal         func_1D9380
    ctx->pc = 0x29630Cu;
    SET_GPR_U32(ctx, 31, 0x296314u);
    ctx->pc = 0x1D9380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9380u, 0x29630Cu, 0x296314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296314u;
label_296314:
    // 0x296314: 0x70409e28  paddub      $s3, $v0, $zero
    ctx->pc = 0x296314u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x296318: 0x12600004  beqz        $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x296318u;
    {
        const bool branch_taken_0x296318 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x296318) {
            ctx->pc = 0x29632Cu;
            goto label_29632c;
        }
    }
    ctx->pc = 0x296320u;
    // 0x296320: 0x8e430a68  lw          $v1, 0xA68($s2)
    ctx->pc = 0x296320u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2664)));
    // 0x296324: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x296324u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x296328: 0xae430a68  sw          $v1, 0xA68($s2)
    ctx->pc = 0x296328u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2664), GPR_U32(ctx, 3));
label_29632c:
    // 0x29632c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x29632cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x296330: 0xa22369c9  sb          $v1, 0x69C9($s1)
    ctx->pc = 0x296330u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 27081), (uint8_t)GPR_U32(ctx, 3));
    // 0x296334: 0x7bbf0040  lq          $ra, 0x40($sp)
    ctx->pc = 0x296334u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x296338: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x296338u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29633c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x29633cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x296340: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x296340u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x296344: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x296344u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x296348: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x296348u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x29634c: 0x3e00008  jr          $ra
    ctx->pc = 0x29634Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29634Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x296354u;
}
