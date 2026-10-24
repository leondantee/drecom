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

// Function: entry_0016691c
// Address: 0x16691c - 0x166a00
void entry_0016691c_0x16691c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016691c_0x16691c");
#endif

    ctx->pc = 0x16691cu;

    // 0x16691c: 0x240310a0  addiu       $v1, $zero, 0x10A0
    ctx->pc = 0x16691cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4256));
    // 0x166920: 0x8fa20340  lw          $v0, 0x340($sp)
    ctx->pc = 0x166920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 832)));
    // 0x166924: 0x24420060  addiu       $v0, $v0, 0x60
    ctx->pc = 0x166924u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x166928: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x166928u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x16692c: 0x8fa20340  lw          $v0, 0x340($sp)
    ctx->pc = 0x16692cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 832)));
    // 0x166930: 0x24420028  addiu       $v0, $v0, 0x28
    ctx->pc = 0x166930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x166934: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x166934u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x166938: 0x27a20028  addiu       $v0, $sp, 0x28
    ctx->pc = 0x166938u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    // 0x16693c: 0xdc430000  ld          $v1, 0x0($v0)
    ctx->pc = 0x16693cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x166940: 0x8fa20340  lw          $v0, 0x340($sp)
    ctx->pc = 0x166940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 832)));
    // 0x166944: 0x24420068  addiu       $v0, $v0, 0x68
    ctx->pc = 0x166944u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 104));
    // 0x166948: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x166948u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x16694c: 0x8fa20340  lw          $v0, 0x340($sp)
    ctx->pc = 0x16694cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 832)));
    // 0x166950: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x166950u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x166954: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x166954u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x166958: 0x8fa20380  lw          $v0, 0x380($sp)
    ctx->pc = 0x166958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 896)));
    // 0x16695c: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x16695Cu;
    {
        const bool branch_taken_0x16695c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16695c) {
            ctx->pc = 0x166A00u;
            return;
        }
    }
    ctx->pc = 0x166964u;
    // 0x166964: 0x8fa50340  lw          $a1, 0x340($sp)
    ctx->pc = 0x166964u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 832)));
    // 0x166968: 0x90a40040  lbu         $a0, 0x40($a1)
    ctx->pc = 0x166968u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 64)));
    // 0x16696c: 0x30020001  andi        $v0, $zero, 0x1
    ctx->pc = 0x16696cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)1);
    // 0x166970: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x166970u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x166974: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x166974u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x166978: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x166978u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x16697c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x16697cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x166980: 0xa0a20040  sb          $v0, 0x40($a1)
    ctx->pc = 0x166980u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 64), (uint8_t)GPR_U32(ctx, 2));
    // 0x166984: 0x217bc  dsll32      $v0, $v0, 30
    ctx->pc = 0x166984u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 30));
    // 0x166988: 0x217fe  dsrl32      $v0, $v0, 31
    ctx->pc = 0x166988u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 31));
    // 0x16698c: 0x8fa50340  lw          $a1, 0x340($sp)
    ctx->pc = 0x16698cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 832)));
    // 0x166990: 0x90a40008  lbu         $a0, 0x8($a1)
    ctx->pc = 0x166990u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x166994: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x166994u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x166998: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x166998u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x16699c: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x16699cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x1669a0: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x1669a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x1669a4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1669a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1669a8: 0xa0a20008  sb          $v0, 0x8($a1)
    ctx->pc = 0x1669a8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 8), (uint8_t)GPR_U32(ctx, 2));
    // 0x1669ac: 0x240201bf  addiu       $v0, $zero, 0x1BF
    ctx->pc = 0x1669acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 447));
    // 0x1669b0: 0x8fa50340  lw          $a1, 0x340($sp)
    ctx->pc = 0x1669b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 832)));
    // 0x1669b4: 0x8ca40054  lw          $a0, 0x54($a1)
    ctx->pc = 0x1669b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 84)));
    // 0x1669b8: 0x304207ff  andi        $v0, $v0, 0x7FF
    ctx->pc = 0x1669b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2047);
    // 0x1669bc: 0x21b00  sll         $v1, $v0, 12
    ctx->pc = 0x1669bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 12));
    // 0x1669c0: 0x3c02ff80  lui         $v0, 0xFF80
    ctx->pc = 0x1669c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65408 << 16));
    // 0x1669c4: 0x34420fff  ori         $v0, $v0, 0xFFF
    ctx->pc = 0x1669c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4095);
    // 0x1669c8: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x1669c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x1669cc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1669ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1669d0: 0xaca20054  sw          $v0, 0x54($a1)
    ctx->pc = 0x1669d0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 84), GPR_U32(ctx, 2));
    // 0x1669d4: 0x2127c  dsll32      $v0, $v0, 9
    ctx->pc = 0x1669d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 9));
    // 0x1669d8: 0x2157e  dsrl32      $v0, $v0, 21
    ctx->pc = 0x1669d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 21));
    // 0x1669dc: 0x8fa50340  lw          $a1, 0x340($sp)
    ctx->pc = 0x1669dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 832)));
    // 0x1669e0: 0x8ca4001c  lw          $a0, 0x1C($a1)
    ctx->pc = 0x1669e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x1669e4: 0x304207ff  andi        $v0, $v0, 0x7FF
    ctx->pc = 0x1669e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2047);
    // 0x1669e8: 0x21b00  sll         $v1, $v0, 12
    ctx->pc = 0x1669e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 12));
    // 0x1669ec: 0x3c02ff80  lui         $v0, 0xFF80
    ctx->pc = 0x1669ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65408 << 16));
    // 0x1669f0: 0x34420fff  ori         $v0, $v0, 0xFFF
    ctx->pc = 0x1669f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4095);
    // 0x1669f4: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x1669f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x1669f8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1669f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1669fc: 0xaca2001c  sw          $v0, 0x1C($a1)
    ctx->pc = 0x1669fcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 2));
    ctx->pc = 0x166a00u;
}
