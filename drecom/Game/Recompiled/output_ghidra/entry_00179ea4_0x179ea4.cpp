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

// Function: entry_00179ea4
// Address: 0x179ea4 - 0x179f40
void entry_00179ea4_0x179ea4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00179ea4_0x179ea4");
#endif

    switch (ctx->pc) {
        case 0x179f04u: goto label_179f04;
        case 0x179f14u: goto label_179f14;
        case 0x179f24u: goto label_179f24;
        default: break;
    }

    ctx->pc = 0x179ea4u;

    // 0x179ea4: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x179ea4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x179ea8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x179ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x179eac: 0x22c3c  dsll32      $a1, $v0, 16
    ctx->pc = 0x179eacu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 16));
    // 0x179eb0: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x179eb0u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x179eb4: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x179eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x179eb8: 0x2343c  dsll32      $a2, $v0, 16
    ctx->pc = 0x179eb8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 16));
    // 0x179ebc: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x179ebcu;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x179ec0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x179ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x179ec4: 0x23c3c  dsll32      $a3, $v0, 16
    ctx->pc = 0x179ec4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 16));
    // 0x179ec8: 0x73c3f  dsra32      $a3, $a3, 16
    ctx->pc = 0x179ec8u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 16));
    // 0x179ecc: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x179eccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x179ed0: 0x2443c  dsll32      $t0, $v0, 16
    ctx->pc = 0x179ed0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) << (32 + 16));
    // 0x179ed4: 0x8443f  dsra32      $t0, $t0, 16
    ctx->pc = 0x179ed4u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 16));
    // 0x179ed8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x179ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x179edc: 0x24c3c  dsll32      $t1, $v0, 16
    ctx->pc = 0x179edcu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) << (32 + 16));
    // 0x179ee0: 0x94c3f  dsra32      $t1, $t1, 16
    ctx->pc = 0x179ee0u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 9) >> (32 + 16));
    // 0x179ee4: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x179ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x179ee8: 0x2543c  dsll32      $t2, $v0, 16
    ctx->pc = 0x179ee8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) << (32 + 16));
    // 0x179eec: 0xa543f  dsra32      $t2, $t2, 16
    ctx->pc = 0x179eecu;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 10) >> (32 + 16));
    // 0x179ef0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x179ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x179ef4: 0x25c3c  dsll32      $t3, $v0, 16
    ctx->pc = 0x179ef4u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 2) << (32 + 16));
    // 0x179ef8: 0xb5c3f  dsra32      $t3, $t3, 16
    ctx->pc = 0x179ef8u;
    SET_GPR_S64(ctx, 11, GPR_S64(ctx, 11) >> (32 + 16));
    // 0x179efc: 0xc0403aa  jal         func_100EA8
    ctx->pc = 0x179EFCu;
    SET_GPR_U32(ctx, 31, 0x179F04u);
    ctx->pc = 0x100EA8u;
    {
        ctx->pc = 0x179F04u;
        ps2_stubs::sceGsSetDefStoreImage(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x179F04u) { return; }
    ctx->pc = 0x179F04u;
label_179f04:
    // 0x179f04: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x179f04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x179f08: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x179f08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x179f0c: 0xc04045a  jal         func_101168
    ctx->pc = 0x179F0Cu;
    SET_GPR_U32(ctx, 31, 0x179F14u);
    ctx->pc = 0x101168u;
    {
        ctx->pc = 0x179F14u;
        ps2_stubs::sceGsExecStoreImage(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x179F14u) { return; }
    ctx->pc = 0x179F14u;
label_179f14:
    // 0x179f14: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x179f14u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x179f18: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x179f18u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x179f1c: 0xc04026a  jal         func_1009A8
    ctx->pc = 0x179F1Cu;
    SET_GPR_U32(ctx, 31, 0x179F24u);
    ctx->pc = 0x1009A8u;
    {
        ctx->pc = 0x179F24u;
        ps2_stubs::sceGsSyncPath(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x179F24u) { return; }
    ctx->pc = 0x179F24u;
label_179f24:
    // 0x179f24: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x179f24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x179f28: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x179f28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x179f2c: 0x3463e010  ori         $v1, $v1, 0xE010
    ctx->pc = 0x179f2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)57360);
    // 0x179f30: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x179f30u;
    runtime->Store32(rdram, ctx, 0x1000E010u, GPR_U32(ctx, 4));
    // 0x179f34: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x179F34u;
    {
        const bool branch_taken_0x179f34 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x179f34) {
            ctx->pc = 0x179F48u;
            return;
        }
    }
    ctx->pc = 0x179F3Cu;
    // 0x179f3c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x179f3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x179f40u;
}
