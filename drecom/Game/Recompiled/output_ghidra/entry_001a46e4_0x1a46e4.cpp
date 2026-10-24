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

// Function: entry_001a46e4
// Address: 0x1a46e4 - 0x1a4724
void entry_001a46e4_0x1a46e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a46e4_0x1a46e4");
#endif

    ctx->pc = 0x1a46e4u;

    // 0x1a46e4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a46e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a46e8: 0x942300cc  lhu         $v1, 0xCC($at)
    ctx->pc = 0x1a46e8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x5D00CCu));
    // 0x1a46ec: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1a46ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1a46f0: 0x30631000  andi        $v1, $v1, 0x1000
    ctx->pc = 0x1a46f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4096);
    // 0x1a46f4: 0x10600019  beqz        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x1A46F4u;
    {
        const bool branch_taken_0x1a46f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a46f4) {
            ctx->pc = 0x1A475Cu;
            return;
        }
    }
    ctx->pc = 0x1A46FCu;
    // 0x1a46fc: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1a46fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a4700: 0x90630311  lbu         $v1, 0x311($v1)
    ctx->pc = 0x1a4700u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 785)));
    // 0x1a4704: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1a4704u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1a4708: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x1a4708u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x1a470c: 0x18600005  blez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A470Cu;
    {
        const bool branch_taken_0x1a470c = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x1a470c) {
            ctx->pc = 0x1A4724u;
            return;
        }
    }
    ctx->pc = 0x1A4714u;
    // 0x1a4714: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1a4714u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a4718: 0x90830311  lbu         $v1, 0x311($a0)
    ctx->pc = 0x1a4718u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 785)));
    // 0x1a471c: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x1a471cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x1a4720: 0xa0830311  sb          $v1, 0x311($a0)
    ctx->pc = 0x1a4720u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 785), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x1a4724u;
}
