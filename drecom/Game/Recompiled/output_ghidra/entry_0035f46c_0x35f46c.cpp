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

// Function: entry_0035f46c
// Address: 0x35f46c - 0x35f4c0
void entry_0035f46c_0x35f46c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0035f46c_0x35f46c");
#endif

    switch (ctx->pc) {
        case 0x35f478u: goto label_35f478;
        case 0x35f49cu: goto label_35f49c;
        default: break;
    }

    ctx->pc = 0x35f46cu;

    // 0x35f46c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x35f46cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x35f470: 0xc0d7ca4  jal         func_35F290
    ctx->pc = 0x35F470u;
    SET_GPR_U32(ctx, 31, 0x35F478u);
    ctx->pc = 0x35F290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35F290u, 0x35F470u, 0x35F478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35F478u;
label_35f478:
    // 0x35f478: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x35f478u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x35f47c: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x35f47cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x35f480: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x35f480u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x35f484: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x35f484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x35f488: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x35f488u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x35f48c: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x35f48cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x35f490: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x35f490u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x35f494: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x35F494u;
    SET_GPR_U32(ctx, 31, 0x35F49Cu);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x35F494u, 0x35F49Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35F49Cu;
label_35f49c:
    // 0x35f49c: 0x24030050  addiu       $v1, $zero, 0x50
    ctx->pc = 0x35f49cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x35f4a0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x35f4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x35f4a4: 0xac4312ac  sw          $v1, 0x12AC($v0)
    ctx->pc = 0x35f4a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4780), GPR_U32(ctx, 3));
    // 0x35f4a8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x35f4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x35f4ac: 0xac401290  sw          $zero, 0x1290($v0)
    ctx->pc = 0x35f4acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4752), GPR_U32(ctx, 0));
    // 0x35f4b0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x35f4b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x35f4b4: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x35f4b4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x35f4b8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x35f4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x35f4bc: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x35f4bcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x35f4c0u;
}
