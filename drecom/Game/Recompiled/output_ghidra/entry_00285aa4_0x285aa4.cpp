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

// Function: entry_00285aa4
// Address: 0x285aa4 - 0x285af4
void entry_00285aa4_0x285aa4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00285aa4_0x285aa4");
#endif

    ctx->pc = 0x285aa4u;

    // 0x285aa4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x285aa4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x285aa8: 0x8c240124  lw          $a0, 0x124($at)
    ctx->pc = 0x285aa8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D0124u));
    // 0x285aac: 0x3c030200  lui         $v1, 0x200
    ctx->pc = 0x285aacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)512 << 16));
    // 0x285ab0: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x285ab0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x285ab4: 0x10600018  beqz        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x285AB4u;
    {
        const bool branch_taken_0x285ab4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x285ab4) {
            ctx->pc = 0x285B18u;
            return;
        }
    }
    ctx->pc = 0x285ABCu;
    // 0x285abc: 0x82235dea  lb          $v1, 0x5DEA($s1)
    ctx->pc = 0x285abcu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 24042)));
    // 0x285ac0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x285ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x285ac4: 0xa2235dea  sb          $v1, 0x5DEA($s1)
    ctx->pc = 0x285ac4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 24042), (uint8_t)GPR_U32(ctx, 3));
    // 0x285ac8: 0x82235dea  lb          $v1, 0x5DEA($s1)
    ctx->pc = 0x285ac8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 24042)));
    // 0x285acc: 0x3263c  dsll32      $a0, $v1, 24
    ctx->pc = 0x285accu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 24));
    // 0x285ad0: 0x4263f  dsra32      $a0, $a0, 24
    ctx->pc = 0x285ad0u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
    // 0x285ad4: 0x121e3c  dsll32      $v1, $s2, 24
    ctx->pc = 0x285ad4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) << (32 + 24));
    // 0x285ad8: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x285ad8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x285adc: 0x64082a  slt         $at, $v1, $a0
    ctx->pc = 0x285adcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x285ae0: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x285AE0u;
    {
        const bool branch_taken_0x285ae0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x285ae0) {
            ctx->pc = 0x285AF4u;
            return;
        }
    }
    ctx->pc = 0x285AE8u;
    // 0x285ae8: 0xa2325dea  sb          $s2, 0x5DEA($s1)
    ctx->pc = 0x285ae8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 24042), (uint8_t)GPR_U32(ctx, 18));
    // 0x285aec: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x285AECu;
    {
        const bool branch_taken_0x285aec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x285aec) {
            ctx->pc = 0x285B18u;
            return;
        }
    }
    ctx->pc = 0x285AF4u;
}
