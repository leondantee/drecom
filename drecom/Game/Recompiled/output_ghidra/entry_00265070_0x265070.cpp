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

// Function: entry_00265070
// Address: 0x265070 - 0x265118
void entry_00265070_0x265070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00265070_0x265070");
#endif

    switch (ctx->pc) {
        case 0x2650e0u: goto label_2650e0;
        case 0x265110u: goto label_265110;
        default: break;
    }

    ctx->pc = 0x265070u;

    // 0x265070: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x265070u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x265074: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x265074u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x265078: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x265078u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x26507c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x26507cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x265080: 0x10600025  beqz        $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x265080u;
    {
        const bool branch_taken_0x265080 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x265080) {
            ctx->pc = 0x265118u;
            return;
        }
    }
    ctx->pc = 0x265088u;
    // 0x265088: 0x8e910a68  lw          $s1, 0xA68($s4)
    ctx->pc = 0x265088u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2664)));
    // 0x26508c: 0x966210a4  lhu         $v0, 0x10A4($s3)
    ctx->pc = 0x26508cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 4260)));
    // 0x265090: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x265090u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x265094: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x265094u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x265098: 0x2442e650  addiu       $v0, $v0, -0x19B0
    ctx->pc = 0x265098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960720));
    // 0x26509c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x26509cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2650a0: 0x90420004  lbu         $v0, 0x4($v0)
    ctx->pc = 0x2650a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2650a4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2650a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2650a8: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x2650a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x2650ac: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2650acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2650b0: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x2650b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x2650b4: 0x2442e650  addiu       $v0, $v0, -0x19B0
    ctx->pc = 0x2650b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960720));
    // 0x2650b8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2650b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2650bc: 0xac511390  sw          $s1, 0x1390($v0)
    ctx->pc = 0x2650bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 5008), GPR_U32(ctx, 17));
    // 0x2650c0: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x2650c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2650c4: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x2650c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x2650c8: 0xac5101ac  sw          $s1, 0x1AC($v0)
    ctx->pc = 0x2650c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 428), GPR_U32(ctx, 17));
    // 0x2650cc: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x2650ccu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x2650d0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2650d0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2650d4: 0x24061350  addiu       $a2, $zero, 0x1350
    ctx->pc = 0x2650d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4944));
    // 0x2650d8: 0xc046314  jal         func_118C50
    ctx->pc = 0x2650D8u;
    SET_GPR_U32(ctx, 31, 0x2650E0u);
    ctx->pc = 0x118C50u;
    {
        ctx->pc = 0x2650E0u;
        ps2_stubs::memset(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2650E0u) { return; }
    ctx->pc = 0x2650E0u;
label_2650e0:
    // 0x2650e0: 0x26830a68  addiu       $v1, $s4, 0xA68
    ctx->pc = 0x2650e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 2664));
    // 0x2650e4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2650e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2650e8: 0x24421350  addiu       $v0, $v0, 0x1350
    ctx->pc = 0x2650e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4944));
    // 0x2650ec: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x2650ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x2650f0: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x2650f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2650f4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2650f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2650f8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2650f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2650fc: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2650fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x265100: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x265100u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x265104: 0x24061350  addiu       $a2, $zero, 0x1350
    ctx->pc = 0x265104u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4944));
    // 0x265108: 0xc0462a6  jal         func_118A98
    ctx->pc = 0x265108u;
    SET_GPR_U32(ctx, 31, 0x265110u);
    ctx->pc = 0x118A98u;
    {
        ctx->pc = 0x265110u;
        ps2_stubs::memcpy(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x265110u) { return; }
    ctx->pc = 0x265110u;
label_265110:
    // 0x265110: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x265110u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x265114: 0x0  nop
    ctx->pc = 0x265114u;
    // NOP
    ctx->pc = 0x265118u;
}
