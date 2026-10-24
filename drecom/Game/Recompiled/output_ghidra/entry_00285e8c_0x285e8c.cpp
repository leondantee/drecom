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

// Function: entry_00285e8c
// Address: 0x285e8c - 0x285f40
void entry_00285e8c_0x285e8c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00285e8c_0x285e8c");
#endif

    switch (ctx->pc) {
        case 0x285f38u: goto label_285f38;
        default: break;
    }

    ctx->pc = 0x285e8cu;

    // 0x285e8c: 0x8e23685c  lw          $v1, 0x685C($s1)
    ctx->pc = 0x285e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 26716)));
    // 0x285e90: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x285e90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x285e94: 0x10600055  beqz        $v1, . + 4 + (0x55 << 2)
    ctx->pc = 0x285E94u;
    {
        const bool branch_taken_0x285e94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x285e94) {
            ctx->pc = 0x285FECu;
            return;
        }
    }
    ctx->pc = 0x285E9Cu;
    // 0x285e9c: 0x82235dea  lb          $v1, 0x5DEA($s1)
    ctx->pc = 0x285e9cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 24042)));
    // 0x285ea0: 0x31e3c  dsll32      $v1, $v1, 24
    ctx->pc = 0x285ea0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
    // 0x285ea4: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x285ea4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x285ea8: 0x4600047  bltz        $v1, . + 4 + (0x47 << 2)
    ctx->pc = 0x285EA8u;
    {
        const bool branch_taken_0x285ea8 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x285ea8) {
            ctx->pc = 0x285FC8u;
            return;
        }
    }
    ctx->pc = 0x285EB0u;
    // 0x285eb0: 0x82235dea  lb          $v1, 0x5DEA($s1)
    ctx->pc = 0x285eb0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 24042)));
    // 0x285eb4: 0x31e3c  dsll32      $v1, $v1, 24
    ctx->pc = 0x285eb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
    // 0x285eb8: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x285eb8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x285ebc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x285ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x285ec0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x285ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x285ec4: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x285ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x285ec8: 0x9063663e  lbu         $v1, 0x663E($v1)
    ctx->pc = 0x285ec8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 26174)));
    // 0x285ecc: 0x307500ff  andi        $s5, $v1, 0xFF
    ctx->pc = 0x285eccu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x285ed0: 0x82235dea  lb          $v1, 0x5DEA($s1)
    ctx->pc = 0x285ed0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 24042)));
    // 0x285ed4: 0x31e3c  dsll32      $v1, $v1, 24
    ctx->pc = 0x285ed4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
    // 0x285ed8: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x285ed8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x285edc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x285edcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x285ee0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x285ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x285ee4: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x285ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x285ee8: 0x9063663f  lbu         $v1, 0x663F($v1)
    ctx->pc = 0x285ee8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 26175)));
    // 0x285eec: 0x307600ff  andi        $s6, $v1, 0xFF
    ctx->pc = 0x285eecu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x285ef0: 0x82235dea  lb          $v1, 0x5DEA($s1)
    ctx->pc = 0x285ef0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 24042)));
    // 0x285ef4: 0x31e3c  dsll32      $v1, $v1, 24
    ctx->pc = 0x285ef4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
    // 0x285ef8: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x285ef8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x285efc: 0x24730001  addiu       $s3, $v1, 0x1
    ctx->pc = 0x285efcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x285f00: 0x92236624  lbu         $v1, 0x6624($s1)
    ctx->pc = 0x285f00u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 26148)));
    // 0x285f04: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x285f04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x285f08: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x285F08u;
    {
        const bool branch_taken_0x285f08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x285f08) {
            ctx->pc = 0x285F5Cu;
            return;
        }
    }
    ctx->pc = 0x285F10u;
    // 0x285f10: 0x82225dea  lb          $v0, 0x5DEA($s1)
    ctx->pc = 0x285f10u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 24042)));
    // 0x285f14: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x285f14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x285f18: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x285f18u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x285f1c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x285F1Cu;
    {
        const bool branch_taken_0x285f1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x285f1c) {
            ctx->pc = 0x285F40u;
            return;
        }
    }
    ctx->pc = 0x285F24u;
    // 0x285f24: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x285f24u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x285f28: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x285f28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x285f2c: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x285f2cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x285f30: 0xc0a56f0  jal         func_295BC0
    ctx->pc = 0x285F30u;
    SET_GPR_U32(ctx, 31, 0x285F38u);
    ctx->pc = 0x295BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295BC0u, 0x285F30u, 0x285F38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285F38u;
label_285f38:
    // 0x285f38: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x285F38u;
    {
        const bool branch_taken_0x285f38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x285f38) {
            ctx->pc = 0x285FDCu;
            return;
        }
    }
    ctx->pc = 0x285F40u;
}
