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

// Function: entry_00155ea0
// Address: 0x155ea0 - 0x155ef8
void entry_00155ea0_0x155ea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00155ea0_0x155ea0");
#endif

    ctx->pc = 0x155ea0u;

    // 0x155ea0: 0x86030006  lh          $v1, 0x6($s0)
    ctx->pc = 0x155ea0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x155ea4: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x155ea4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x155ea8: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x155ea8u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x155eac: 0x86030008  lh          $v1, 0x8($s0)
    ctx->pc = 0x155eacu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x155eb0: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x155eb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x155eb4: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x155eb4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x155eb8: 0x1483000f  bne         $a0, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x155EB8u;
    {
        const bool branch_taken_0x155eb8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x155eb8) {
            ctx->pc = 0x155EF8u;
            return;
        }
    }
    ctx->pc = 0x155EC0u;
    // 0x155ec0: 0x9603000a  lhu         $v1, 0xA($s0)
    ctx->pc = 0x155ec0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
    // 0x155ec4: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x155ec4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x155ec8: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x155ec8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x155ecc: 0x1460000e  bnez        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x155ECCu;
    {
        const bool branch_taken_0x155ecc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x155ecc) {
            ctx->pc = 0x155F08u;
            return;
        }
    }
    ctx->pc = 0x155ED4u;
    // 0x155ed4: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x155ed4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x155ed8: 0xa2000001  sb          $zero, 0x1($s0)
    ctx->pc = 0x155ed8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x155edc: 0xa6000004  sh          $zero, 0x4($s0)
    ctx->pc = 0x155edcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 0));
    // 0x155ee0: 0xa6000006  sh          $zero, 0x6($s0)
    ctx->pc = 0x155ee0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 0));
    // 0x155ee4: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x155ee4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x155ee8: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x155ee8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x155eec: 0xa600000a  sh          $zero, 0xA($s0)
    ctx->pc = 0x155eecu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 10), (uint16_t)GPR_U32(ctx, 0));
    // 0x155ef0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x155EF0u;
    {
        const bool branch_taken_0x155ef0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x155ef0) {
            ctx->pc = 0x155F08u;
            return;
        }
    }
    ctx->pc = 0x155EF8u;
}
