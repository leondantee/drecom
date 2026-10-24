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

// Function: entry_00103e50
// Address: 0x103e50 - 0x103ed0
void entry_00103e50_0x103e50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00103e50_0x103e50");
#endif

    ctx->pc = 0x103e50u;

label_103e50:
    // 0x103e50: 0x25e641f8  addiu       $a2, $t7, 0x41F8
    ctx->pc = 0x103e50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 15), 16888));
    // 0x103e54: 0x24040140  addiu       $a0, $zero, 0x140
    ctx->pc = 0x103e54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x103e58: 0x8cc20280  lw          $v0, 0x280($a2)
    ctx->pc = 0x103e58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 640)));
    // 0x103e5c: 0xb1880  sll         $v1, $t3, 2
    ctx->pc = 0x103e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
    // 0x103e60: 0x3c070fff  lui         $a3, 0xFFF
    ctx->pc = 0x103e60u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4095 << 16));
    // 0x103e64: 0x16e4026  xor         $t0, $t3, $t6
    ctx->pc = 0x103e64u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 11) ^ GPR_U64(ctx, 14));
    // 0x103e68: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x103e68u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x103e6c: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x103e6cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x103e70: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x103e70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x103e74: 0x3c0a3000  lui         $t2, 0x3000
    ctx->pc = 0x103e74u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)12288 << 16));
    // 0x103e78: 0x354a0030  ori         $t2, $t2, 0x30
    ctx->pc = 0x103e78u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)48);
    // 0x103e7c: 0x8280a  movz        $a1, $zero, $t0
    ctx->pc = 0x103e7cu;
    if (GPR_U64(ctx, 8) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
    // 0x103e80: 0x24090030  addiu       $t1, $zero, 0x30
    ctx->pc = 0x103e80u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x103e84: 0x52f38  dsll        $a1, $a1, 28
    ctx->pc = 0x103e84u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 28);
    // 0x103e88: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x103e88u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x103e8c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x103e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x103e90: 0x16d402a  slt         $t0, $t3, $t5
    ctx->pc = 0x103e90u;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 11) < (int64_t)GPR_S64(ctx, 13)) ? 1 : 0);
    // 0x103e94: 0xc32021  addu        $a0, $a2, $v1
    ctx->pc = 0x103e94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x103e98: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x103e98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103e9c: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x103e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x103ea0: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x103ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x103ea4: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x103ea4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x103ea8: 0x671824  and         $v1, $v1, $a3
    ctx->pc = 0x103ea8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 7));
    // 0x103eac: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x103eacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x103eb0: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x103eb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x103eb4: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x103eb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x103eb8: 0x6a1825  or          $v1, $v1, $t2
    ctx->pc = 0x103eb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 10));
    // 0x103ebc: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x103ebcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x103ec0: 0xfd830000  sd          $v1, 0x0($t4)
    ctx->pc = 0x103ec0u;
    WRITE64(ADD32(GPR_U32(ctx, 12), 0), GPR_U64(ctx, 3));
    // 0x103ec4: 0xfd820010  sd          $v0, 0x10($t4)
    ctx->pc = 0x103ec4u;
    WRITE64(ADD32(GPR_U32(ctx, 12), 16), GPR_U64(ctx, 2));
    // 0x103ec8: 0x1500ffe1  bnez        $t0, . + 4 + (-0x1F << 2)
    ctx->pc = 0x103EC8u;
    {
        const bool branch_taken_0x103ec8 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x103ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103EC8u;
        // 0x103ecc: 0x258c0020  addiu       $t4, $t4, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103ec8) {
            ctx->pc = 0x103E50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_103e50;
        }
    }
    ctx->pc = 0x103ED0u;
}
