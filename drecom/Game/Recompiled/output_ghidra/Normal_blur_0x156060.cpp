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

// Function: Normal_blur
// Address: 0x156060 - 0x1562e0
void Normal_blur_0x156060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Normal_blur_0x156060");
#endif

    switch (ctx->pc) {
        case 0x1560b0u: goto label_1560b0;
        case 0x15621cu: goto label_15621c;
        case 0x15624cu: goto label_15624c;
        case 0x156288u: goto label_156288;
        case 0x1562c8u: goto label_1562c8;
        default: break;
    }

    ctx->pc = 0x156060u;

    // 0x156060: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x156060u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x156064: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x156064u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x156068: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x156068u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x15606c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15606cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x156070: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x156070u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x156074: 0x2450f9e0  addiu       $s0, $v0, -0x620
    ctx->pc = 0x156074u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965728));
    // 0x156078: 0x261100b0  addiu       $s1, $s0, 0xB0
    ctx->pc = 0x156078u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
    // 0x15607c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x15607cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x156080: 0xae020050  sw          $v0, 0x50($s0)
    ctx->pc = 0x156080u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3EFA30u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EFA30u, _value); } while (0);
    // 0x156084: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x156084u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x156088: 0x3442104f  ori         $v0, $v0, 0x104F
    ctx->pc = 0x156088u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4175);
    // 0x15608c: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x15608cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3EFA34u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EFA34u, _value); } while (0);
    // 0x156090: 0x3c020a00  lui         $v0, 0xA00
    ctx->pc = 0x156090u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2560 << 16));
    // 0x156094: 0x34420070  ori         $v0, $v0, 0x70
    ctx->pc = 0x156094u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)112);
    // 0x156098: 0xfe020058  sd          $v0, 0x58($s0)
    ctx->pc = 0x156098u;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3EFA38u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x3EFA38u, _value); } while (0);
    // 0x15609c: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x15609cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x1560a0: 0x24441614  addiu       $a0, $v0, 0x1614
    ctx->pc = 0x1560a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 5652));
    // 0x1560a4: 0x26050050  addiu       $a1, $s0, 0x50
    ctx->pc = 0x1560a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x1560a8: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x1560A8u;
    SET_GPR_U32(ctx, 31, 0x1560B0u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x1560A8u, 0x1560B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1560B0u;
label_1560b0:
    // 0x1560b0: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1560b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1560b4: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1560b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x1560b8: 0x3c026400  lui         $v0, 0x6400
    ctx->pc = 0x1560b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)25600 << 16));
    // 0x1560bc: 0x34422b16  ori         $v0, $v0, 0x2B16
    ctx->pc = 0x1560bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)11030);
    // 0x1560c0: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x1560c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x1560c4: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x1560c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
    // 0x1560c8: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1560c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1560cc: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x1560ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x1560d0: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x1560d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x1560d4: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1560d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x1560d8: 0x90224f10  lbu         $v0, 0x4F10($at)
    ctx->pc = 0x1560d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x3F4F10u));
    // 0x1560dc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1560dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1560e0: 0x21e00  sll         $v1, $v0, 24
    ctx->pc = 0x1560e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x1560e4: 0x3c020080  lui         $v0, 0x80
    ctx->pc = 0x1560e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
    // 0x1560e8: 0x34428080  ori         $v0, $v0, 0x8080
    ctx->pc = 0x1560e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
    // 0x1560ec: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1560ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1560f0: 0x26220010  addiu       $v0, $s1, 0x10
    ctx->pc = 0x1560f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x1560f4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1560f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1560f8: 0x26220014  addiu       $v0, $s1, 0x14
    ctx->pc = 0x1560f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x1560fc: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1560fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x156100: 0x3c020df0  lui         $v0, 0xDF0
    ctx->pc = 0x156100u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3568 << 16));
    // 0x156104: 0x34431ff0  ori         $v1, $v0, 0x1FF0
    ctx->pc = 0x156104u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8176);
    // 0x156108: 0x26220020  addiu       $v0, $s1, 0x20
    ctx->pc = 0x156108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x15610c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x15610cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x156110: 0x3c0278fb  lui         $v0, 0x78FB
    ctx->pc = 0x156110u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30971 << 16));
    // 0x156114: 0x34436ff7  ori         $v1, $v0, 0x6FF7
    ctx->pc = 0x156114u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28663);
    // 0x156118: 0x26220018  addiu       $v0, $s1, 0x18
    ctx->pc = 0x156118u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
    // 0x15611c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x15611cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x156120: 0x3403fff8  ori         $v1, $zero, 0xFFF8
    ctx->pc = 0x156120u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65528);
    // 0x156124: 0x2622001c  addiu       $v0, $s1, 0x1C
    ctx->pc = 0x156124u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 28));
    // 0x156128: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x156128u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x15612c: 0x3c0286eb  lui         $v0, 0x86EB
    ctx->pc = 0x15612cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34539 << 16));
    // 0x156130: 0x34438fe7  ori         $v1, $v0, 0x8FE7
    ctx->pc = 0x156130u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36839);
    // 0x156134: 0x26220024  addiu       $v0, $s1, 0x24
    ctx->pc = 0x156134u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 36));
    // 0x156138: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x156138u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x15613c: 0x3403fff8  ori         $v1, $zero, 0xFFF8
    ctx->pc = 0x15613cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65528);
    // 0x156140: 0x26220028  addiu       $v0, $s1, 0x28
    ctx->pc = 0x156140u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 40));
    // 0x156144: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x156144u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x156148: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x156148u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x15614c: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x15614cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0140u));
    // 0x156150: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x156150u;
    {
        const bool branch_taken_0x156150 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x156150) {
            ctx->pc = 0x156194u;
            goto label_156194;
        }
    }
    ctx->pc = 0x156158u;
    // 0x156158: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x156158u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x15615c: 0x2447ec58  addiu       $a3, $v0, -0x13A8
    ctx->pc = 0x15615cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962264));
    // 0x156160: 0x260654e0  addiu       $a2, $s0, 0x54E0
    ctx->pc = 0x156160u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 21728));
    // 0x156164: 0xdce50000  ld          $a1, 0x0($a3)
    ctx->pc = 0x156164u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x47EC58u));
    // 0x156168: 0xdce40008  ld          $a0, 0x8($a3)
    ctx->pc = 0x156168u;
    SET_GPR_U64(ctx, 4, FAST_READ64(0x47EC60u));
    // 0x15616c: 0xdce30010  ld          $v1, 0x10($a3)
    ctx->pc = 0x15616cu;
    SET_GPR_U64(ctx, 3, FAST_READ64(0x47EC68u));
    // 0x156170: 0xdce20018  ld          $v0, 0x18($a3)
    ctx->pc = 0x156170u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x47EC70u));
    // 0x156174: 0xfcc50000  sd          $a1, 0x0($a2)
    ctx->pc = 0x156174u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 5));
    // 0x156178: 0xfcc40008  sd          $a0, 0x8($a2)
    ctx->pc = 0x156178u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 4));
    // 0x15617c: 0xfcc30010  sd          $v1, 0x10($a2)
    ctx->pc = 0x15617cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 3));
    // 0x156180: 0xfcc20018  sd          $v0, 0x18($a2)
    ctx->pc = 0x156180u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 24), GPR_U64(ctx, 2));
    // 0x156184: 0xdce20020  ld          $v0, 0x20($a3)
    ctx->pc = 0x156184u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x47EC78u));
    // 0x156188: 0xfcc20020  sd          $v0, 0x20($a2)
    ctx->pc = 0x156188u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 32), GPR_U64(ctx, 2));
    // 0x15618c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x15618Cu;
    {
        const bool branch_taken_0x15618c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15618c) {
            ctx->pc = 0x1561C8u;
            goto label_1561c8;
        }
    }
    ctx->pc = 0x156194u;
label_156194:
    // 0x156194: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x156194u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x156198: 0x2447ec80  addiu       $a3, $v0, -0x1380
    ctx->pc = 0x156198u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962304));
    // 0x15619c: 0x260654e0  addiu       $a2, $s0, 0x54E0
    ctx->pc = 0x15619cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 21728));
    // 0x1561a0: 0xdce50000  ld          $a1, 0x0($a3)
    ctx->pc = 0x1561a0u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x47EC80u));
    // 0x1561a4: 0xdce40008  ld          $a0, 0x8($a3)
    ctx->pc = 0x1561a4u;
    SET_GPR_U64(ctx, 4, FAST_READ64(0x47EC88u));
    // 0x1561a8: 0xdce30010  ld          $v1, 0x10($a3)
    ctx->pc = 0x1561a8u;
    SET_GPR_U64(ctx, 3, FAST_READ64(0x47EC90u));
    // 0x1561ac: 0xdce20018  ld          $v0, 0x18($a3)
    ctx->pc = 0x1561acu;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x47EC98u));
    // 0x1561b0: 0xfcc50000  sd          $a1, 0x0($a2)
    ctx->pc = 0x1561b0u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 5));
    // 0x1561b4: 0xfcc40008  sd          $a0, 0x8($a2)
    ctx->pc = 0x1561b4u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 4));
    // 0x1561b8: 0xfcc30010  sd          $v1, 0x10($a2)
    ctx->pc = 0x1561b8u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 3));
    // 0x1561bc: 0xfcc20018  sd          $v0, 0x18($a2)
    ctx->pc = 0x1561bcu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 24), GPR_U64(ctx, 2));
    // 0x1561c0: 0xdce20020  ld          $v0, 0x20($a3)
    ctx->pc = 0x1561c0u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x47ECA0u));
    // 0x1561c4: 0xfcc20020  sd          $v0, 0x20($a2)
    ctx->pc = 0x1561c4u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 32), GPR_U64(ctx, 2));
label_1561c8:
    // 0x1561c8: 0x920454fc  lbu         $a0, 0x54FC($s0)
    ctx->pc = 0x1561c8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 21756)));
    // 0x1561cc: 0x30020001  andi        $v0, $zero, 0x1
    ctx->pc = 0x1561ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)1);
    // 0x1561d0: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1561d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1561d4: 0x2402fffb  addiu       $v0, $zero, -0x5
    ctx->pc = 0x1561d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x1561d8: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x1561d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x1561dc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1561dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1561e0: 0xa20254fc  sb          $v0, 0x54FC($s0)
    ctx->pc = 0x1561e0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 21756), (uint8_t)GPR_U32(ctx, 2));
    // 0x1561e4: 0x920454fc  lbu         $a0, 0x54FC($s0)
    ctx->pc = 0x1561e4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 21756)));
    // 0x1561e8: 0x30020003  andi        $v0, $zero, 0x3
    ctx->pc = 0x1561e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)3);
    // 0x1561ec: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x1561ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1561f0: 0x2402ffe7  addiu       $v0, $zero, -0x19
    ctx->pc = 0x1561f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967271));
    // 0x1561f4: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x1561f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x1561f8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1561f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1561fc: 0xa20254fc  sb          $v0, 0x54FC($s0)
    ctx->pc = 0x1561fcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 21756), (uint8_t)GPR_U32(ctx, 2));
    // 0x156200: 0x260254e0  addiu       $v0, $s0, 0x54E0
    ctx->pc = 0x156200u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 21728));
    // 0x156204: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x156204u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x156208: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x156208u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x15620c: 0x24441614  addiu       $a0, $v0, 0x1614
    ctx->pc = 0x15620cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 5652));
    // 0x156210: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x156210u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x156214: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x156214u;
    SET_GPR_U32(ctx, 31, 0x15621Cu);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x156214u, 0x15621Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15621Cu;
label_15621c:
    // 0x15621c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x15621cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x156220: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x156220u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x156224: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x156224u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x156228: 0x34421048  ori         $v0, $v0, 0x1048
    ctx->pc = 0x156228u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4168);
    // 0x15622c: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x15622cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x156230: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x156230u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
    // 0x156234: 0xfe020008  sd          $v0, 0x8($s0)
    ctx->pc = 0x156234u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 2));
    // 0x156238: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x156238u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x15623c: 0x24441614  addiu       $a0, $v0, 0x1614
    ctx->pc = 0x15623cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 5652));
    // 0x156240: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x156240u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x156244: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x156244u;
    SET_GPR_U32(ctx, 31, 0x15624Cu);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x156244u, 0x15624Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15624Cu;
label_15624c:
    // 0x15624c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x15624cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x156250: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x156250u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x156254: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x156254u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x156258: 0x34421043  ori         $v0, $v0, 0x1043
    ctx->pc = 0x156258u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4163);
    // 0x15625c: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x15625cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x156260: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x156260u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x156264: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x156264u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x156268: 0x24020044  addiu       $v0, $zero, 0x44
    ctx->pc = 0x156268u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x15626c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x15626cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x156270: 0xfe020018  sd          $v0, 0x18($s0)
    ctx->pc = 0x156270u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 24), GPR_U64(ctx, 2));
    // 0x156274: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x156274u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x156278: 0x24441614  addiu       $a0, $v0, 0x1614
    ctx->pc = 0x156278u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 5652));
    // 0x15627c: 0x26050010  addiu       $a1, $s0, 0x10
    ctx->pc = 0x15627cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x156280: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x156280u;
    SET_GPR_U32(ctx, 31, 0x156288u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x156280u, 0x156288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156288u;
label_156288:
    // 0x156288: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x156288u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x15628c: 0xae020040  sw          $v0, 0x40($s0)
    ctx->pc = 0x15628cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 2));
    // 0x156290: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x156290u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x156294: 0x3442104f  ori         $v0, $v0, 0x104F
    ctx->pc = 0x156294u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4175);
    // 0x156298: 0xae020044  sw          $v0, 0x44($s0)
    ctx->pc = 0x156298u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 2));
    // 0x15629c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15629cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1562a0: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1562a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1562a4: 0x3c020a00  lui         $v0, 0xA00
    ctx->pc = 0x1562a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2560 << 16));
    // 0x1562a8: 0x34420070  ori         $v0, $v0, 0x70
    ctx->pc = 0x1562a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)112);
    // 0x1562ac: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1562acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1562b0: 0xfe020048  sd          $v0, 0x48($s0)
    ctx->pc = 0x1562b0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 72), GPR_U64(ctx, 2));
    // 0x1562b4: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x1562b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x1562b8: 0x24441614  addiu       $a0, $v0, 0x1614
    ctx->pc = 0x1562b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 5652));
    // 0x1562bc: 0x26050040  addiu       $a1, $s0, 0x40
    ctx->pc = 0x1562bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x1562c0: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x1562C0u;
    SET_GPR_U32(ctx, 31, 0x1562C8u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x1562C0u, 0x1562C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1562C8u;
label_1562c8:
    // 0x1562c8: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x1562c8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1562cc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1562ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1562d0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1562d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1562d4: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1562d4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1562d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1562D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1562D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1562E0u;
}
