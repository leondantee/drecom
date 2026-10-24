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

// Function: entry_001a7588
// Address: 0x1a7588 - 0x1a765c
void entry_001a7588_0x1a7588(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a7588_0x1a7588");
#endif

    ctx->pc = 0x1a7588u;

    // 0x1a7588: 0x82020310  lb          $v0, 0x310($s0)
    ctx->pc = 0x1a7588u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 784)));
    // 0x1a758c: 0x21e3c  dsll32      $v1, $v0, 24
    ctx->pc = 0x1a758cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 24));
    // 0x1a7590: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x1a7590u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x1a7594: 0x711021  addu        $v0, $v1, $s1
    ctx->pc = 0x1a7594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1a7598: 0x4410030  bgez        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x1A7598u;
    {
        const bool branch_taken_0x1a7598 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1a7598) {
            ctx->pc = 0x1A765Cu;
            return;
        }
    }
    ctx->pc = 0x1A75A0u;
    // 0x1a75a0: 0x9202031c  lbu         $v0, 0x31C($s0)
    ctx->pc = 0x1a75a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 796)));
    // 0x1a75a4: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x1a75a4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1a75a8: 0x62880  sll         $a1, $a2, 2
    ctx->pc = 0x1a75a8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1a75ac: 0xa61021  addu        $v0, $a1, $a2
    ctx->pc = 0x1a75acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1a75b0: 0x220c0  sll         $a0, $v0, 3
    ctx->pc = 0x1a75b0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1a75b4: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x1a75b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x1a75b8: 0x2462cca0  addiu       $v0, $v1, -0x3360
    ctx->pc = 0x1a75b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954144));
    // 0x1a75bc: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1a75bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1a75c0: 0x9042001e  lbu         $v0, 0x1E($v0)
    ctx->pc = 0x1a75c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 30)));
    // 0x1a75c4: 0x23e7c  dsll32      $a3, $v0, 25
    ctx->pc = 0x1a75c4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 25));
    // 0x1a75c8: 0x7373e  dsrl32      $a2, $a3, 28
    ctx->pc = 0x1a75c8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) >> (32 + 28));
    // 0x1a75cc: 0x30c50003  andi        $a1, $a2, 0x3
    ctx->pc = 0x1a75ccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)3);
    // 0x1a75d0: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1a75d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1a75d4: 0x652023  subu        $a0, $v1, $a1
    ctx->pc = 0x1a75d4u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1a75d8: 0x820202b0  lb          $v0, 0x2B0($s0)
    ctx->pc = 0x1a75d8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 688)));
    // 0x1a75dc: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x1a75dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x1a75e0: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x1a75e0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x1a75e4: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x1a75e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1a75e8: 0x641018  mult        $v0, $v1, $a0
    ctx->pc = 0x1a75e8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1a75ec: 0x2383c  dsll32      $a3, $v0, 0
    ctx->pc = 0x1a75ecu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1a75f0: 0x7383f  dsra32      $a3, $a3, 0
    ctx->pc = 0x1a75f0u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 0));
    // 0x1a75f4: 0x9202031c  lbu         $v0, 0x31C($s0)
    ctx->pc = 0x1a75f4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 796)));
    // 0x1a75f8: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x1a75f8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1a75fc: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x1a75fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1a7600: 0x651021  addu        $v0, $v1, $a1
    ctx->pc = 0x1a7600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1a7604: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1a7604u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1a7608: 0x3c060048  lui         $a2, 0x48
    ctx->pc = 0x1a7608u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)72 << 16));
    // 0x1a760c: 0x24c4cca0  addiu       $a0, $a2, -0x3360
    ctx->pc = 0x1a760cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 4294954144));
    // 0x1a7610: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1a7610u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1a7614: 0xdc430018  ld          $v1, 0x18($v0)
    ctx->pc = 0x1a7614u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x1a7618: 0x31378  dsll        $v0, $v1, 13
    ctx->pc = 0x1a7618u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << 13);
    // 0x1a761c: 0x214be  dsrl32      $v0, $v0, 18
    ctx->pc = 0x1a761cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 18));
    // 0x1a7620: 0x47102d  daddu       $v0, $v0, $a3
    ctx->pc = 0x1a7620u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 7));
    // 0x1a7624: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x1a7624u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1a7628: 0x26240003  addiu       $a0, $s1, 0x3
    ctx->pc = 0x1a7628u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 3));
    // 0x1a762c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1a762cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1a7630: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x1a7630u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1a7634: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1a7634u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1a7638: 0x2023021  addu        $a2, $s0, $v0
    ctx->pc = 0x1a7638u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1a763c: 0x94c700b0  lhu         $a3, 0xB0($a2)
    ctx->pc = 0x1a763cu;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 176)));
    // 0x1a7640: 0x30a33fff  andi        $v1, $a1, 0x3FFF
    ctx->pc = 0x1a7640u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)16383);
    // 0x1a7644: 0x2402c000  addiu       $v0, $zero, -0x4000
    ctx->pc = 0x1a7644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294950912));
    // 0x1a7648: 0xe22024  and         $a0, $a3, $v0
    ctx->pc = 0x1a7648u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x1a764c: 0x832825  or          $a1, $a0, $v1
    ctx->pc = 0x1a764cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1a7650: 0xa4c500b0  sh          $a1, 0xB0($a2)
    ctx->pc = 0x1a7650u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 176), (uint16_t)GPR_U32(ctx, 5));
    // 0x1a7654: 0x10000064  b           . + 4 + (0x64 << 2)
    ctx->pc = 0x1A7654u;
    {
        const bool branch_taken_0x1a7654 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a7654) {
            ctx->pc = 0x1A77E8u;
            return;
        }
    }
    ctx->pc = 0x1A765Cu;
}
