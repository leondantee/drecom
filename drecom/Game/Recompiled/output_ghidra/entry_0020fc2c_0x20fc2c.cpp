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

// Function: entry_0020fc2c
// Address: 0x20fc2c - 0x20fcd4
void entry_0020fc2c_0x20fc2c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020fc2c_0x20fc2c");
#endif

    ctx->pc = 0x20fc2cu;

    // 0x20fc2c: 0x8fa30528  lw          $v1, 0x528($sp)
    ctx->pc = 0x20fc2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
    // 0x20fc30: 0x84651278  lh          $a1, 0x1278($v1)
    ctx->pc = 0x20fc30u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x20fc34: 0x5243c  dsll32      $a0, $a1, 16
    ctx->pc = 0x20fc34u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) << (32 + 16));
    // 0x20fc38: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x20fc38u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x20fc3c: 0x240300f5  addiu       $v1, $zero, 0xF5
    ctx->pc = 0x20fc3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 245));
    // 0x20fc40: 0x10830024  beq         $a0, $v1, . + 4 + (0x24 << 2)
    ctx->pc = 0x20FC40u;
    {
        const bool branch_taken_0x20fc40 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x20fc40) {
            ctx->pc = 0x20FCD4u;
            return;
        }
    }
    ctx->pc = 0x20FC48u;
    // 0x20fc48: 0x8fbe0528  lw          $fp, 0x528($sp)
    ctx->pc = 0x20fc48u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
    // 0x20fc4c: 0x87d01278  lh          $s0, 0x1278($fp)
    ctx->pc = 0x20fc4cu;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 4728)));
    // 0x20fc50: 0x103c3c  dsll32      $a3, $s0, 16
    ctx->pc = 0x20fc50u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 16) << (32 + 16));
    // 0x20fc54: 0x73c3f  dsra32      $a3, $a3, 16
    ctx->pc = 0x20fc54u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 16));
    // 0x20fc58: 0x2405020b  addiu       $a1, $zero, 0x20B
    ctx->pc = 0x20fc58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 523));
    // 0x20fc5c: 0x10e5001d  beq         $a3, $a1, . + 4 + (0x1D << 2)
    ctx->pc = 0x20FC5Cu;
    {
        const bool branch_taken_0x20fc5c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 5));
        if (branch_taken_0x20fc5c) {
            ctx->pc = 0x20FCD4u;
            return;
        }
    }
    ctx->pc = 0x20FC64u;
    // 0x20fc64: 0x8fa40528  lw          $a0, 0x528($sp)
    ctx->pc = 0x20fc64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
    // 0x20fc68: 0x84831278  lh          $v1, 0x1278($a0)
    ctx->pc = 0x20fc68u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4728)));
    // 0x20fc6c: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x20fc6cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x20fc70: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x20fc70u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x20fc74: 0x24030226  addiu       $v1, $zero, 0x226
    ctx->pc = 0x20fc74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 550));
    // 0x20fc78: 0x10830016  beq         $a0, $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x20FC78u;
    {
        const bool branch_taken_0x20fc78 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x20fc78) {
            ctx->pc = 0x20FCD4u;
            return;
        }
    }
    ctx->pc = 0x20FC80u;
    // 0x20fc80: 0x8fa60528  lw          $a2, 0x528($sp)
    ctx->pc = 0x20fc80u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
    // 0x20fc84: 0x84c31278  lh          $v1, 0x1278($a2)
    ctx->pc = 0x20fc84u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 4728)));
    // 0x20fc88: 0x34c3c  dsll32      $t1, $v1, 16
    ctx->pc = 0x20fc88u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3) << (32 + 16));
    // 0x20fc8c: 0x94c3f  dsra32      $t1, $t1, 16
    ctx->pc = 0x20fc8cu;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 9) >> (32 + 16));
    // 0x20fc90: 0x240a027b  addiu       $t2, $zero, 0x27B
    ctx->pc = 0x20fc90u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 635));
    // 0x20fc94: 0x112a000f  beq         $t1, $t2, . + 4 + (0xF << 2)
    ctx->pc = 0x20FC94u;
    {
        const bool branch_taken_0x20fc94 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 10));
        if (branch_taken_0x20fc94) {
            ctx->pc = 0x20FCD4u;
            return;
        }
    }
    ctx->pc = 0x20FC9Cu;
    // 0x20fc9c: 0x8fa30528  lw          $v1, 0x528($sp)
    ctx->pc = 0x20fc9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
    // 0x20fca0: 0x84651278  lh          $a1, 0x1278($v1)
    ctx->pc = 0x20fca0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x20fca4: 0x51c3c  dsll32      $v1, $a1, 16
    ctx->pc = 0x20fca4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 16));
    // 0x20fca8: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x20fca8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x20fcac: 0x2404028f  addiu       $a0, $zero, 0x28F
    ctx->pc = 0x20fcacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 655));
    // 0x20fcb0: 0x10640008  beq         $v1, $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x20FCB0u;
    {
        const bool branch_taken_0x20fcb0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x20fcb0) {
            ctx->pc = 0x20FCD4u;
            return;
        }
    }
    ctx->pc = 0x20FCB8u;
    // 0x20fcb8: 0x8fa60528  lw          $a2, 0x528($sp)
    ctx->pc = 0x20fcb8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
    // 0x20fcbc: 0x84c71278  lh          $a3, 0x1278($a2)
    ctx->pc = 0x20fcbcu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 4728)));
    // 0x20fcc0: 0x74c3c  dsll32      $t1, $a3, 16
    ctx->pc = 0x20fcc0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 7) << (32 + 16));
    // 0x20fcc4: 0x94c3f  dsra32      $t1, $t1, 16
    ctx->pc = 0x20fcc4u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 9) >> (32 + 16));
    // 0x20fcc8: 0x240a0311  addiu       $t2, $zero, 0x311
    ctx->pc = 0x20fcc8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 785));
    // 0x20fccc: 0x152a000e  bne         $t1, $t2, . + 4 + (0xE << 2)
    ctx->pc = 0x20FCCCu;
    {
        const bool branch_taken_0x20fccc = (GPR_U64(ctx, 9) != GPR_U64(ctx, 10));
        if (branch_taken_0x20fccc) {
            ctx->pc = 0x20FD08u;
            return;
        }
    }
    ctx->pc = 0x20FCD4u;
}
