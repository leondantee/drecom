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

// Function: entry_001fa7f4
// Address: 0x1fa7f4 - 0x1fa83c
void entry_001fa7f4_0x1fa7f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fa7f4_0x1fa7f4");
#endif

    ctx->pc = 0x1fa7f4u;

    // 0x1fa7f4: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1fa7f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1fa7f8: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1fa7f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1fa7fc: 0x946300aa  lhu         $v1, 0xAA($v1)
    ctx->pc = 0x1fa7fcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 170)));
    // 0x1fa800: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1fa800u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1fa804: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x1fa804u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x1fa808: 0x106000c0  beqz        $v1, . + 4 + (0xC0 << 2)
    ctx->pc = 0x1FA808u;
    {
        const bool branch_taken_0x1fa808 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fa808) {
            ctx->pc = 0x1FAB0Cu;
            return;
        }
    }
    ctx->pc = 0x1FA810u;
    // 0x1fa810: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1fa810u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1fa814: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1fa814u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1fa818: 0x906300a8  lbu         $v1, 0xA8($v1)
    ctx->pc = 0x1fa818u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 168)));
    // 0x1fa81c: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1fa81cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1fa820: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1fa820u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fa824: 0x10830083  beq         $a0, $v1, . + 4 + (0x83 << 2)
    ctx->pc = 0x1FA824u;
    {
        const bool branch_taken_0x1fa824 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1fa824) {
            ctx->pc = 0x1FAA34u;
            return;
        }
    }
    ctx->pc = 0x1FA82Cu;
    // 0x1fa82c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FA82Cu;
    {
        const bool branch_taken_0x1fa82c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fa82c) {
            ctx->pc = 0x1FA83Cu;
            return;
        }
    }
    ctx->pc = 0x1FA834u;
    // 0x1fa834: 0x100000b5  b           . + 4 + (0xB5 << 2)
    ctx->pc = 0x1FA834u;
    {
        const bool branch_taken_0x1fa834 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fa834) {
            ctx->pc = 0x1FAB0Cu;
            return;
        }
    }
    ctx->pc = 0x1FA83Cu;
}
