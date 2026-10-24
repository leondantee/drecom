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

// Function: entry_0025e488
// Address: 0x25e488 - 0x25e4dc
void entry_0025e488_0x25e488(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0025e488_0x25e488");
#endif

    ctx->pc = 0x25e488u;

    // 0x25e488: 0x96040050  lhu         $a0, 0x50($s0)
    ctx->pc = 0x25e488u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x25e48c: 0x3085ffff  andi        $a1, $a0, 0xFFFF
    ctx->pc = 0x25e48cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x25e490: 0x2a5102a  slt         $v0, $s5, $a1
    ctx->pc = 0x25e490u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x25e494: 0x1440ffd0  bnez        $v0, . + 4 + (-0x30 << 2)
    ctx->pc = 0x25E494u;
    {
        const bool branch_taken_0x25e494 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25e494) {
            ctx->pc = 0x25E3D8u;
            return;
        }
    }
    ctx->pc = 0x25E49Cu;
    // 0x25e49c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x25e49cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x25e4a0: 0x8c221a98  lw          $v0, 0x1A98($at)
    ctx->pc = 0x25e4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x25e4a4: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x25e4a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x25e4a8: 0x442824  and         $a1, $v0, $a0
    ctx->pc = 0x25e4a8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x25e4ac: 0x14a00065  bnez        $a1, . + 4 + (0x65 << 2)
    ctx->pc = 0x25E4ACu;
    {
        const bool branch_taken_0x25e4ac = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x25e4ac) {
            ctx->pc = 0x25E644u;
            return;
        }
    }
    ctx->pc = 0x25E4B4u;
    // 0x25e4b4: 0x960609e0  lhu         $a2, 0x9E0($s0)
    ctx->pc = 0x25e4b4u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2528)));
    // 0x25e4b8: 0x30c2ffff  andi        $v0, $a2, 0xFFFF
    ctx->pc = 0x25e4b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x25e4bc: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x25e4bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x25e4c0: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x25E4C0u;
    {
        const bool branch_taken_0x25e4c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25e4c0) {
            ctx->pc = 0x25E4DCu;
            return;
        }
    }
    ctx->pc = 0x25E4C8u;
    // 0x25e4c8: 0x920309da  lbu         $v1, 0x9DA($s0)
    ctx->pc = 0x25e4c8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2522)));
    // 0x25e4cc: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x25e4ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x25e4d0: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x25e4d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x25e4d4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x25E4D4u;
    {
        const bool branch_taken_0x25e4d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25e4d4) {
            ctx->pc = 0x25E4F0u;
            return;
        }
    }
    ctx->pc = 0x25E4DCu;
}
