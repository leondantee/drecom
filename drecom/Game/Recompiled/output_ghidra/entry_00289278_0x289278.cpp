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

// Function: entry_00289278
// Address: 0x289278 - 0x289318
void entry_00289278_0x289278(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00289278_0x289278");
#endif

    ctx->pc = 0x289278u;

    // 0x289278: 0x8e475dc0  lw          $a3, 0x5DC0($s2)
    ctx->pc = 0x289278u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24000)));
    // 0x28927c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x28927cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x289280: 0x14e60025  bne         $a3, $a2, . + 4 + (0x25 << 2)
    ctx->pc = 0x289280u;
    {
        const bool branch_taken_0x289280 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 6));
        if (branch_taken_0x289280) {
            ctx->pc = 0x289318u;
            return;
        }
    }
    ctx->pc = 0x289288u;
    // 0x289288: 0x8fa800d0  lw          $t0, 0xD0($sp)
    ctx->pc = 0x289288u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x28928c: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x28928cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x289290: 0x3c065555  lui         $a2, 0x5555
    ctx->pc = 0x289290u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)21845 << 16));
    // 0x289294: 0x34c95556  ori         $t1, $a2, 0x5556
    ctx->pc = 0x289294u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)21846);
    // 0x289298: 0x1280018  mult        $zero, $t1, $t0
    ctx->pc = 0x289298u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x28929c: 0x81fc2  srl         $v1, $t0, 31
    ctx->pc = 0x28929cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 8), 31));
    // 0x2892a0: 0x0  nop
    ctx->pc = 0x2892a0u;
    // NOP
    // 0x2892a4: 0x1010  mfhi        $v0
    ctx->pc = 0x2892a4u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x2892a8: 0x435021  addu        $t2, $v0, $v1
    ctx->pc = 0x2892a8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2892ac: 0x8fa600d4  lw          $a2, 0xD4($sp)
    ctx->pc = 0x2892acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x2892b0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2892b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2892b4: 0x3c075555  lui         $a3, 0x5555
    ctx->pc = 0x2892b4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)21845 << 16));
    // 0x2892b8: 0x34e85556  ori         $t0, $a3, 0x5556
    ctx->pc = 0x2892b8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)21846);
    // 0x2892bc: 0x1060018  mult        $zero, $t0, $a2
    ctx->pc = 0x2892bcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x2892c0: 0x65fc2  srl         $t3, $a2, 31
    ctx->pc = 0x2892c0u;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
    // 0x2892c4: 0x0  nop
    ctx->pc = 0x2892c4u;
    // NOP
    // 0x2892c8: 0x1010  mfhi        $v0
    ctx->pc = 0x2892c8u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x2892cc: 0x4b1821  addu        $v1, $v0, $t3
    ctx->pc = 0x2892ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x2892d0: 0x33200  sll         $a2, $v1, 8
    ctx->pc = 0x2892d0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x2892d4: 0x1464825  or          $t1, $t2, $a2
    ctx->pc = 0x2892d4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 10) | GPR_U64(ctx, 6));
    // 0x2892d8: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x2892d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x2892dc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2892dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2892e0: 0x3c075555  lui         $a3, 0x5555
    ctx->pc = 0x2892e0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)21845 << 16));
    // 0x2892e4: 0x34e85556  ori         $t0, $a3, 0x5556
    ctx->pc = 0x2892e4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)21846);
    // 0x2892e8: 0x1030018  mult        $zero, $t0, $v1
    ctx->pc = 0x2892e8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x2892ec: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x2892ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x2892f0: 0x0  nop
    ctx->pc = 0x2892f0u;
    // NOP
    // 0x2892f4: 0x3010  mfhi        $a2
    ctx->pc = 0x2892f4u;
    SET_GPR_U64(ctx, 6, ctx->hi);
    // 0x2892f8: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x2892f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x2892fc: 0x65400  sll         $t2, $a2, 16
    ctx->pc = 0x2892fcu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x289300: 0x1494825  or          $t1, $t2, $t1
    ctx->pc = 0x289300u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 10) | GPR_U64(ctx, 9));
    // 0x289304: 0x8fa300dc  lw          $v1, 0xDC($sp)
    ctx->pc = 0x289304u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x289308: 0x31600  sll         $v0, $v1, 24
    ctx->pc = 0x289308u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x28930c: 0x492825  or          $a1, $v0, $t1
    ctx->pc = 0x28930cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x289310: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x289310u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x289314: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x289314u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    ctx->pc = 0x289318u;
}
