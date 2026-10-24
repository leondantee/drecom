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

// Function: entry_0021051c
// Address: 0x21051c - 0x210610
void entry_0021051c_0x21051c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021051c_0x21051c");
#endif

    ctx->pc = 0x21051cu;

    // 0x21051c: 0x8fa90528  lw          $t1, 0x528($sp)
    ctx->pc = 0x21051cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
    // 0x210520: 0x852a1278  lh          $t2, 0x1278($t1)
    ctx->pc = 0x210520u;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 4728)));
    // 0x210524: 0xa2c3c  dsll32      $a1, $t2, 16
    ctx->pc = 0x210524u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 10) << (32 + 16));
    // 0x210528: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x210528u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x21052c: 0x28a1012c  slti        $at, $a1, 0x12C
    ctx->pc = 0x21052cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)300) ? 1 : 0);
    // 0x210530: 0x10200151  beqz        $at, . + 4 + (0x151 << 2)
    ctx->pc = 0x210530u;
    {
        const bool branch_taken_0x210530 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x210530) {
            ctx->pc = 0x210A78u;
            return;
        }
    }
    ctx->pc = 0x210538u;
    // 0x210538: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x210538u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x21053c: 0x8c239530  lw          $v1, -0x6AD0($at)
    ctx->pc = 0x21053cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x619530u));
    // 0x210540: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x210540u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x210544: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x210544u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x210548: 0xac249530  sw          $a0, -0x6AD0($at)
    ctx->pc = 0x210548u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x619530u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x619530u, _value); } while (0);
    // 0x21054c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x21054cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x210550: 0x8c239538  lw          $v1, -0x6AC8($at)
    ctx->pc = 0x210550u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x619538u));
    // 0x210554: 0x14830148  bne         $a0, $v1, . + 4 + (0x148 << 2)
    ctx->pc = 0x210554u;
    {
        const bool branch_taken_0x210554 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x210554) {
            ctx->pc = 0x210A78u;
            return;
        }
    }
    ctx->pc = 0x21055Cu;
    // 0x21055c: 0x3c040039  lui         $a0, 0x39
    ctx->pc = 0x21055cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)57 << 16));
    // 0x210560: 0x2485a510  addiu       $a1, $a0, -0x5AF0
    ctx->pc = 0x210560u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944016));
    // 0x210564: 0x27a60260  addiu       $a2, $sp, 0x260
    ctx->pc = 0x210564u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
    // 0x210568: 0x78a70000  lq          $a3, 0x0($a1)
    ctx->pc = 0x210568u;
    SET_GPR_VEC(ctx, 7, FAST_READ128(0x38A510u));
    // 0x21056c: 0x7cc70000  sq          $a3, 0x0($a2)
    ctx->pc = 0x21056cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 7));
    // 0x210570: 0x3c080039  lui         $t0, 0x39
    ctx->pc = 0x210570u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)57 << 16));
    // 0x210574: 0x2503a520  addiu       $v1, $t0, -0x5AE0
    ctx->pc = 0x210574u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 4294944032));
    // 0x210578: 0x27a50270  addiu       $a1, $sp, 0x270
    ctx->pc = 0x210578u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
    // 0x21057c: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x21057cu;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x38A520u));
    // 0x210580: 0x7ca30000  sq          $v1, 0x0($a1)
    ctx->pc = 0x210580u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
    // 0x210584: 0x3c060039  lui         $a2, 0x39
    ctx->pc = 0x210584u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)57 << 16));
    // 0x210588: 0x24c4a530  addiu       $a0, $a2, -0x5AD0
    ctx->pc = 0x210588u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 4294944048));
    // 0x21058c: 0x27a50280  addiu       $a1, $sp, 0x280
    ctx->pc = 0x21058cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
    // 0x210590: 0x78860000  lq          $a2, 0x0($a0)
    ctx->pc = 0x210590u;
    SET_GPR_VEC(ctx, 6, FAST_READ128(0x38A530u));
    // 0x210594: 0x7ca60000  sq          $a2, 0x0($a1)
    ctx->pc = 0x210594u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 6));
    // 0x210598: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x210598u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x21059c: 0x2464a540  addiu       $a0, $v1, -0x5AC0
    ctx->pc = 0x21059cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944064));
    // 0x2105a0: 0x27a70290  addiu       $a3, $sp, 0x290
    ctx->pc = 0x2105a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
    // 0x2105a4: 0x78830000  lq          $v1, 0x0($a0)
    ctx->pc = 0x2105a4u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x38A540u));
    // 0x2105a8: 0x7ce30000  sq          $v1, 0x0($a3)
    ctx->pc = 0x2105a8u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 3));
    // 0x2105ac: 0x3c060039  lui         $a2, 0x39
    ctx->pc = 0x2105acu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)57 << 16));
    // 0x2105b0: 0x24c3a550  addiu       $v1, $a2, -0x5AB0
    ctx->pc = 0x2105b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294944080));
    // 0x2105b4: 0x27a40360  addiu       $a0, $sp, 0x360
    ctx->pc = 0x2105b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 864));
    // 0x2105b8: 0x78650000  lq          $a1, 0x0($v1)
    ctx->pc = 0x2105b8u;
    SET_GPR_VEC(ctx, 5, FAST_READ128(0x38A550u));
    // 0x2105bc: 0x7c850000  sq          $a1, 0x0($a0)
    ctx->pc = 0x2105bcu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 5));
    // 0x2105c0: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x2105c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x2105c4: 0x2464a560  addiu       $a0, $v1, -0x5AA0
    ctx->pc = 0x2105c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944096));
    // 0x2105c8: 0x27a50370  addiu       $a1, $sp, 0x370
    ctx->pc = 0x2105c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 880));
    // 0x2105cc: 0x78860000  lq          $a2, 0x0($a0)
    ctx->pc = 0x2105ccu;
    SET_GPR_VEC(ctx, 6, FAST_READ128(0x38A560u));
    // 0x2105d0: 0x7ca60000  sq          $a2, 0x0($a1)
    ctx->pc = 0x2105d0u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 6));
    // 0x2105d4: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x2105d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x2105d8: 0xac209530  sw          $zero, -0x6AD0($at)
    ctx->pc = 0x2105d8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x619530u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x619530u, _value); } while (0);
    // 0x2105dc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2105dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2105e0: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x2105e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x2105e4: 0xac239538  sw          $v1, -0x6AC8($at)
    ctx->pc = 0x2105e4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x619538u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x619538u, _value); } while (0);
    // 0x2105e8: 0x8fa60528  lw          $a2, 0x528($sp)
    ctx->pc = 0x2105e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
    // 0x2105ec: 0x84c51278  lh          $a1, 0x1278($a2)
    ctx->pc = 0x2105ecu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 4728)));
    // 0x2105f0: 0x51c3c  dsll32      $v1, $a1, 16
    ctx->pc = 0x2105f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 16));
    // 0x2105f4: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2105f4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2105f8: 0x28610064  slti        $at, $v1, 0x64
    ctx->pc = 0x2105f8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)100) ? 1 : 0);
    // 0x2105fc: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x2105FCu;
    {
        const bool branch_taken_0x2105fc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2105fc) {
            ctx->pc = 0x210610u;
            return;
        }
    }
    ctx->pc = 0x210604u;
    // 0x210604: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x210604u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x210608: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x210608u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x21060c: 0xac269538  sw          $a2, -0x6AC8($at)
    ctx->pc = 0x21060cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x619538u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x619538u, _value); } while (0);
    ctx->pc = 0x210610u;
}
