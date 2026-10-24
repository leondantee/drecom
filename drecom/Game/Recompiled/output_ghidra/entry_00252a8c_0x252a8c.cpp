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

// Function: entry_00252a8c
// Address: 0x252a8c - 0x252b34
void entry_00252a8c_0x252a8c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00252a8c_0x252a8c");
#endif

    switch (ctx->pc) {
        case 0x252b0cu: goto label_252b0c;
        default: break;
    }

    ctx->pc = 0x252a8cu;

    // 0x252a8c: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x252a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x252a90: 0x8c510104  lw          $s1, 0x104($v0)
    ctx->pc = 0x252a90u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
    // 0x252a94: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x252a94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x252a98: 0x244200a0  addiu       $v0, $v0, 0xA0
    ctx->pc = 0x252a98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x252a9c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x252a9cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x252aa0: 0x27a20070  addiu       $v0, $sp, 0x70
    ctx->pc = 0x252aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x252aa4: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x252aa4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x252aa8: 0x26420190  addiu       $v0, $s2, 0x190
    ctx->pc = 0x252aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 400));
    // 0x252aac: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x252aacu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x252ab0: 0x27a20080  addiu       $v0, $sp, 0x80
    ctx->pc = 0x252ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x252ab4: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x252ab4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x252ab8: 0x7a230000  lq          $v1, 0x0($s1)
    ctx->pc = 0x252ab8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x252abc: 0x27a20090  addiu       $v0, $sp, 0x90
    ctx->pc = 0x252abcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x252ac0: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x252ac0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x252ac4: 0x26220010  addiu       $v0, $s1, 0x10
    ctx->pc = 0x252ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x252ac8: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x252ac8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x252acc: 0x27a200a0  addiu       $v0, $sp, 0xA0
    ctx->pc = 0x252accu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x252ad0: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x252ad0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x252ad4: 0x26220020  addiu       $v0, $s1, 0x20
    ctx->pc = 0x252ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x252ad8: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x252ad8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x252adc: 0x27a200b0  addiu       $v0, $sp, 0xB0
    ctx->pc = 0x252adcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x252ae0: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x252ae0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x252ae4: 0x26220030  addiu       $v0, $s1, 0x30
    ctx->pc = 0x252ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x252ae8: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x252ae8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x252aec: 0x27a200c0  addiu       $v0, $sp, 0xC0
    ctx->pc = 0x252aecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x252af0: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x252af0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x252af4: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x252af4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x252af8: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x252af8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x252afc: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x252afcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x252b00: 0x240707c0  addiu       $a3, $zero, 0x7C0
    ctx->pc = 0x252b00u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1984));
    // 0x252b04: 0xc059e1c  jal         func_167870
    ctx->pc = 0x252B04u;
    SET_GPR_U32(ctx, 31, 0x252B0Cu);
    ctx->pc = 0x167870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167870u, 0x252B04u, 0x252B0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x252B0Cu;
label_252b0c:
    // 0x252b0c: 0x70409e28  paddub      $s3, $v0, $zero
    ctx->pc = 0x252b0cu;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x252b10: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x252B10u;
    {
        const bool branch_taken_0x252b10 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x252b10) {
            ctx->pc = 0x252B34u;
            return;
        }
    }
    ctx->pc = 0x252B18u;
    // 0x252b18: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x252b18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x252b1c: 0xae030128  sw          $v1, 0x128($s0)
    ctx->pc = 0x252b1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 296), GPR_U32(ctx, 3));
    // 0x252b20: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x252b20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x252b24: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x252b24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x252b28: 0xac64000c  sw          $a0, 0xC($v1)
    ctx->pc = 0x252b28u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
    // 0x252b2c: 0x10000227  b           . + 4 + (0x227 << 2)
    ctx->pc = 0x252B2Cu;
    {
        const bool branch_taken_0x252b2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x252b2c) {
            ctx->pc = 0x2533CCu;
            return;
        }
    }
    ctx->pc = 0x252B34u;
}
