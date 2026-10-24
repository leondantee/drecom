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

// Function: entry_0018dad4
// Address: 0x18dad4 - 0x18db50
void entry_0018dad4_0x18dad4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018dad4_0x18dad4");
#endif

    ctx->pc = 0x18dad4u;

    // 0x18dad4: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x18dad4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18dad8: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x18dad8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x18dadc: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x18dadcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x18dae0: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x18DAE0u;
    {
        const bool branch_taken_0x18dae0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18dae0) {
            ctx->pc = 0x18DB50u;
            return;
        }
    }
    ctx->pc = 0x18DAE8u;
    // 0x18dae8: 0x8e22008c  lw          $v0, 0x8C($s1)
    ctx->pc = 0x18dae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 140)));
    // 0x18daec: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x18daecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x18daf0: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x18daf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x18daf4: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x18daf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x18daf8: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x18daf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x18dafc: 0x3c150130  lui         $s5, 0x130
    ctx->pc = 0x18dafcu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)304 << 16));
    // 0x18db00: 0x551825  or          $v1, $v0, $s5
    ctx->pc = 0x18db00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 21));
    // 0x18db04: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x18db04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x18db08: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x18db08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x18db0c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x18db0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x18db10: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x18db10u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x18db14: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x18db14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x18db18: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x18db18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x18db1c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x18db1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x18db20: 0x622025  or          $a0, $v1, $v0
    ctx->pc = 0x18db20u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x18db24: 0x8e230090  lw          $v1, 0x90($s1)
    ctx->pc = 0x18db24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
    // 0x18db28: 0x3103c  dsll32      $v0, $v1, 0
    ctx->pc = 0x18db28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 0));
    // 0x18db2c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x18db2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x18db30: 0x2117c  dsll32      $v0, $v0, 5
    ctx->pc = 0x18db30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 5));
    // 0x18db34: 0x828825  or          $s1, $a0, $v0
    ctx->pc = 0x18db34u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x18db38: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x18db38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x18db3c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x18db3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x18db40: 0x2221025  or          $v0, $s1, $v0
    ctx->pc = 0x18db40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
    // 0x18db44: 0xfe020aa0  sd          $v0, 0xAA0($s0)
    ctx->pc = 0x18db44u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 2720), GPR_U64(ctx, 2));
    // 0x18db48: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x18DB48u;
    {
        const bool branch_taken_0x18db48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18db48) {
            ctx->pc = 0x18DBB0u;
            return;
        }
    }
    ctx->pc = 0x18DB50u;
}
