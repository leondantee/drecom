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

// Function: entry_00321458
// Address: 0x321458 - 0x3214b0
void entry_00321458_0x321458(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00321458_0x321458");
#endif

    switch (ctx->pc) {
        case 0x3214a4u: goto label_3214a4;
        default: break;
    }

    ctx->pc = 0x321458u;

    // 0x321458: 0x320400ff  andi        $a0, $s0, 0xFF
    ctx->pc = 0x321458u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x32145c: 0x8fa50128  lw          $a1, 0x128($sp)
    ctx->pc = 0x32145cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x321460: 0xa0a40345  sb          $a0, 0x345($a1)
    ctx->pc = 0x321460u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 837), (uint8_t)GPR_U32(ctx, 4));
    // 0x321464: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x321464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x321468: 0x90420344  lbu         $v0, 0x344($v0)
    ctx->pc = 0x321468u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 836)));
    // 0x32146c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x32146cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x321470: 0x502023  subu        $a0, $v0, $s0
    ctx->pc = 0x321470u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x321474: 0x308500ff  andi        $a1, $a0, 0xFF
    ctx->pc = 0x321474u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x321478: 0x8fa60128  lw          $a2, 0x128($sp)
    ctx->pc = 0x321478u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x32147c: 0xa0c50348  sb          $a1, 0x348($a2)
    ctx->pc = 0x32147cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 840), (uint8_t)GPR_U32(ctx, 5));
    // 0x321480: 0x103900  sll         $a3, $s0, 4
    ctx->pc = 0x321480u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x321484: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x321484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x321488: 0x472021  addu        $a0, $v0, $a3
    ctx->pc = 0x321488u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x32148c: 0x2602ffff  addiu       $v0, $s0, -0x1
    ctx->pc = 0x32148cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x321490: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x321490u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x321494: 0x8fa50128  lw          $a1, 0x128($sp)
    ctx->pc = 0x321494u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x321498: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x321498u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x32149c: 0xc040ec4  jal         func_103B10
    ctx->pc = 0x32149Cu;
    SET_GPR_U32(ctx, 31, 0x3214A4u);
    ctx->pc = 0x103B10u;
    {
        ctx->pc = 0x3214A4u;
        ps2_stubs::sceVu0CopyVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x3214A4u) { return; }
    ctx->pc = 0x3214A4u;
label_3214a4:
    // 0x3214a4: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x3214a4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x3214a8: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x3214A8u;
    {
        const bool branch_taken_0x3214a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3214a8) {
            ctx->pc = 0x321520u;
            return;
        }
    }
    ctx->pc = 0x3214B0u;
}
