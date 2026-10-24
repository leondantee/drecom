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

// Function: entry_002cf8c8
// Address: 0x2cf8c8 - 0x2cf96c
void entry_002cf8c8_0x2cf8c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002cf8c8_0x2cf8c8");
#endif

    ctx->pc = 0x2cf8c8u;

    // 0x2cf8c8: 0x8fa40118  lw          $a0, 0x118($sp)
    ctx->pc = 0x2cf8c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x2cf8cc: 0x2486134c  addiu       $a2, $a0, 0x134C
    ctx->pc = 0x2cf8ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 4940));
    // 0x2cf8d0: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x2cf8d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2cf8d4: 0x946301c0  lhu         $v1, 0x1C0($v1)
    ctx->pc = 0x2cf8d4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 448)));
    // 0x2cf8d8: 0x3065ffff  andi        $a1, $v1, 0xFFFF
    ctx->pc = 0x2cf8d8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2cf8dc: 0xae250068  sw          $a1, 0x68($s1)
    ctx->pc = 0x2cf8dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 5));
    // 0x2cf8e0: 0xae250064  sw          $a1, 0x64($s1)
    ctx->pc = 0x2cf8e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 5));
    // 0x2cf8e4: 0xae250060  sw          $a1, 0x60($s1)
    ctx->pc = 0x2cf8e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 5));
    // 0x2cf8e8: 0x8fa30118  lw          $v1, 0x118($sp)
    ctx->pc = 0x2cf8e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x2cf8ec: 0x2463134c  addiu       $v1, $v1, 0x134C
    ctx->pc = 0x2cf8ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4940));
    // 0x2cf8f0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2cf8f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2cf8f4: 0x946301c2  lhu         $v1, 0x1C2($v1)
    ctx->pc = 0x2cf8f4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 450)));
    // 0x2cf8f8: 0x3065ffff  andi        $a1, $v1, 0xFFFF
    ctx->pc = 0x2cf8f8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2cf8fc: 0x14a0001b  bnez        $a1, . + 4 + (0x1B << 2)
    ctx->pc = 0x2CF8FCu;
    {
        const bool branch_taken_0x2cf8fc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cf8fc) {
            ctx->pc = 0x2CF96Cu;
            return;
        }
    }
    ctx->pc = 0x2CF904u;
    // 0x2cf904: 0x8fa30118  lw          $v1, 0x118($sp)
    ctx->pc = 0x2cf904u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x2cf908: 0x2463134c  addiu       $v1, $v1, 0x134C
    ctx->pc = 0x2cf908u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4940));
    // 0x2cf90c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2cf90cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2cf910: 0x948301c0  lhu         $v1, 0x1C0($a0)
    ctx->pc = 0x2cf910u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 448)));
    // 0x2cf914: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x2cf914u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x2cf918: 0xa48301c0  sh          $v1, 0x1C0($a0)
    ctx->pc = 0x2cf918u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 448), (uint16_t)GPR_U32(ctx, 3));
    // 0x2cf91c: 0x8fa30118  lw          $v1, 0x118($sp)
    ctx->pc = 0x2cf91cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x2cf920: 0x2463134c  addiu       $v1, $v1, 0x134C
    ctx->pc = 0x2cf920u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4940));
    // 0x2cf924: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2cf924u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2cf928: 0x948301c0  lhu         $v1, 0x1C0($a0)
    ctx->pc = 0x2cf928u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 448)));
    // 0x2cf92c: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x2cf92cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2cf930: 0x28630180  slti        $v1, $v1, 0x180
    ctx->pc = 0x2cf930u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)384) ? 1 : 0);
    // 0x2cf934: 0x14600024  bnez        $v1, . + 4 + (0x24 << 2)
    ctx->pc = 0x2CF934u;
    {
        const bool branch_taken_0x2cf934 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cf934) {
            ctx->pc = 0x2CF9C8u;
            return;
        }
    }
    ctx->pc = 0x2CF93Cu;
    // 0x2cf93c: 0x24050180  addiu       $a1, $zero, 0x180
    ctx->pc = 0x2cf93cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
    // 0x2cf940: 0x8fa40118  lw          $a0, 0x118($sp)
    ctx->pc = 0x2cf940u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x2cf944: 0x2483134c  addiu       $v1, $a0, 0x134C
    ctx->pc = 0x2cf944u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4940));
    // 0x2cf948: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2cf948u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2cf94c: 0xa46501c0  sh          $a1, 0x1C0($v1)
    ctx->pc = 0x2cf94cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 448), (uint16_t)GPR_U32(ctx, 5));
    // 0x2cf950: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2cf950u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cf954: 0x8fa30118  lw          $v1, 0x118($sp)
    ctx->pc = 0x2cf954u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x2cf958: 0x2464134c  addiu       $a0, $v1, 0x134C
    ctx->pc = 0x2cf958u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4940));
    // 0x2cf95c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2cf95cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2cf960: 0xa46501c2  sh          $a1, 0x1C2($v1)
    ctx->pc = 0x2cf960u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 450), (uint16_t)GPR_U32(ctx, 5));
    // 0x2cf964: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x2CF964u;
    {
        const bool branch_taken_0x2cf964 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cf964) {
            ctx->pc = 0x2CF9C8u;
            return;
        }
    }
    ctx->pc = 0x2CF96Cu;
}
