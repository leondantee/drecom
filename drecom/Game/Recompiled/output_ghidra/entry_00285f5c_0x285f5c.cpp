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

// Function: entry_00285f5c
// Address: 0x285f5c - 0x285fac
void entry_00285f5c_0x285f5c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00285f5c_0x285f5c");
#endif

    switch (ctx->pc) {
        case 0x285fa4u: goto label_285fa4;
        default: break;
    }

    ctx->pc = 0x285f5cu;

    // 0x285f5c: 0x92236624  lbu         $v1, 0x6624($s1)
    ctx->pc = 0x285f5cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 26148)));
    // 0x285f60: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x285f60u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x285f64: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x285f64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x285f68: 0x1483001c  bne         $a0, $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x285F68u;
    {
        const bool branch_taken_0x285f68 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x285f68) {
            ctx->pc = 0x285FDCu;
            return;
        }
    }
    ctx->pc = 0x285F70u;
    // 0x285f70: 0x82225dea  lb          $v0, 0x5DEA($s1)
    ctx->pc = 0x285f70u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 24042)));
    // 0x285f74: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x285f74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x285f78: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x285f78u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x285f7c: 0x1840000b  blez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x285F7Cu;
    {
        const bool branch_taken_0x285f7c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x285f7c) {
            ctx->pc = 0x285FACu;
            return;
        }
    }
    ctx->pc = 0x285F84u;
    // 0x285f84: 0x82225dea  lb          $v0, 0x5DEA($s1)
    ctx->pc = 0x285f84u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 24042)));
    // 0x285f88: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x285f88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x285f8c: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x285f8cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x285f90: 0x24450007  addiu       $a1, $v0, 0x7
    ctx->pc = 0x285f90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 7));
    // 0x285f94: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x285f94u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x285f98: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x285f98u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x285f9c: 0xc0a56f0  jal         func_295BC0
    ctx->pc = 0x285F9Cu;
    SET_GPR_U32(ctx, 31, 0x285FA4u);
    ctx->pc = 0x295BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295BC0u, 0x285F9Cu, 0x285FA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285FA4u;
label_285fa4:
    // 0x285fa4: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x285FA4u;
    {
        const bool branch_taken_0x285fa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x285fa4) {
            ctx->pc = 0x285FDCu;
            return;
        }
    }
    ctx->pc = 0x285FACu;
}
