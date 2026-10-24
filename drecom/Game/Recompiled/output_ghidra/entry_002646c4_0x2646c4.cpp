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

// Function: entry_002646c4
// Address: 0x2646c4 - 0x264718
void entry_002646c4_0x2646c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002646c4_0x2646c4");
#endif

    ctx->pc = 0x2646c4u;

    // 0x2646c4: 0x8e23133c  lw          $v1, 0x133C($s1)
    ctx->pc = 0x2646c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4924)));
    // 0x2646c8: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x2646c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
    // 0x2646cc: 0xae23133c  sw          $v1, 0x133C($s1)
    ctx->pc = 0x2646ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4924), GPR_U32(ctx, 3));
    // 0x2646d0: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2646d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2646d4: 0x31a3c  dsll32      $v1, $v1, 8
    ctx->pc = 0x2646d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 8));
    // 0x2646d8: 0x31a3e  dsrl32      $v1, $v1, 8
    ctx->pc = 0x2646d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 8));
    // 0x2646dc: 0x3c31821  addu        $v1, $fp, $v1
    ctx->pc = 0x2646dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 3)));
    // 0x2646e0: 0xafa300ec  sw          $v1, 0xEC($sp)
    ctx->pc = 0x2646e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 3));
    // 0x2646e4: 0x8fa300ec  lw          $v1, 0xEC($sp)
    ctx->pc = 0x2646e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
    // 0x2646e8: 0xae23009c  sw          $v1, 0x9C($s1)
    ctx->pc = 0x2646e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 156), GPR_U32(ctx, 3));
    // 0x2646ec: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2646ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2646f0: 0xae2300a8  sw          $v1, 0xA8($s1)
    ctx->pc = 0x2646f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 168), GPR_U32(ctx, 3));
    // 0x2646f4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2646f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2646f8: 0xae2300a0  sw          $v1, 0xA0($s1)
    ctx->pc = 0x2646f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 3));
    // 0x2646fc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2646fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x264700: 0xae2300a4  sw          $v1, 0xA4($s1)
    ctx->pc = 0x264700u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 164), GPR_U32(ctx, 3));
    // 0x264704: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x264704u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x264708: 0xae23124c  sw          $v1, 0x124C($s1)
    ctx->pc = 0x264708u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4684), GPR_U32(ctx, 3));
    // 0x26470c: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x26470cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x264710: 0x10000057  b           . + 4 + (0x57 << 2)
    ctx->pc = 0x264710u;
    {
        const bool branch_taken_0x264710 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x264710) {
            ctx->pc = 0x264870u;
            return;
        }
    }
    ctx->pc = 0x264718u;
}
