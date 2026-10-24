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

// Function: entry_0023336c
// Address: 0x23336c - 0x2333a8
void entry_0023336c_0x23336c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023336c_0x23336c");
#endif

    ctx->pc = 0x23336cu;

    // 0x23336c: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x23336cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x233370: 0x906310a8  lbu         $v1, 0x10A8($v1)
    ctx->pc = 0x233370u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4264)));
    // 0x233374: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x233374u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x233378: 0x240300fe  addiu       $v1, $zero, 0xFE
    ctx->pc = 0x233378u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 254));
    // 0x23337c: 0x14830179  bne         $a0, $v1, . + 4 + (0x179 << 2)
    ctx->pc = 0x23337Cu;
    {
        const bool branch_taken_0x23337c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x23337c) {
            ctx->pc = 0x233964u;
            return;
        }
    }
    ctx->pc = 0x233384u;
    // 0x233384: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x233384u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x233388: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x233388u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x23338c: 0xa06410a8  sb          $a0, 0x10A8($v1)
    ctx->pc = 0x23338cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 4));
    // 0x233390: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x233390u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x233394: 0xa2030002  sb          $v1, 0x2($s0)
    ctx->pc = 0x233394u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x233398: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x233398u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x23339c: 0xa20310a8  sb          $v1, 0x10A8($s0)
    ctx->pc = 0x23339cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4264), (uint8_t)GPR_U32(ctx, 3));
    // 0x2333a0: 0x10000170  b           . + 4 + (0x170 << 2)
    ctx->pc = 0x2333A0u;
    {
        const bool branch_taken_0x2333a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2333a0) {
            ctx->pc = 0x233964u;
            return;
        }
    }
    ctx->pc = 0x2333A8u;
}
