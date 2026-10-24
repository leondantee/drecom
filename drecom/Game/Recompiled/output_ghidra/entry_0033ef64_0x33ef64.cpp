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

// Function: entry_0033ef64
// Address: 0x33ef64 - 0x33efdc
void entry_0033ef64_0x33ef64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0033ef64_0x33ef64");
#endif

    switch (ctx->pc) {
        case 0x33efc8u: goto label_33efc8;
        default: break;
    }

    ctx->pc = 0x33ef64u;

    // 0x33ef64: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x33ef64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x33ef68: 0x946311f4  lhu         $v1, 0x11F4($v1)
    ctx->pc = 0x33ef68u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4596)));
    // 0x33ef6c: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x33ef6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x33ef70: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x33ef70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x33ef74: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x33ef74u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x33ef78: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x33ef78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x33ef7c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x33ef7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x33ef80: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x33ef80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x33ef84: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x33ef84u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x33ef88: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x33ef88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x33ef8c: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x33ef8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x33ef90: 0x649021  addu        $s2, $v1, $a0
    ctx->pc = 0x33ef90u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x33ef94: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x33ef94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x33ef98: 0x8c231a50  lw          $v1, 0x1A50($at)
    ctx->pc = 0x33ef98u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A50u));
    // 0x33ef9c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x33ef9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x33efa0: 0x1460000e  bnez        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x33EFA0u;
    {
        const bool branch_taken_0x33efa0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x33efa0) {
            ctx->pc = 0x33EFDCu;
            return;
        }
    }
    ctx->pc = 0x33EFA8u;
    // 0x33efa8: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x33efa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x33efac: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x33efacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x33efb0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x33efb0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x33efb4: 0x240405a4  addiu       $a0, $zero, 0x5A4
    ctx->pc = 0x33efb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1444));
    // 0x33efb8: 0x26450030  addiu       $a1, $s2, 0x30
    ctx->pc = 0x33efb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    // 0x33efbc: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x33efbcu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x33efc0: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x33EFC0u;
    SET_GPR_U32(ctx, 31, 0x33EFC8u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x33EFC0u, 0x33EFC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33EFC8u;
label_33efc8:
    // 0x33efc8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x33efc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x33efcc: 0x8c231a50  lw          $v1, 0x1A50($at)
    ctx->pc = 0x33efccu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A50u));
    // 0x33efd0: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x33efd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x33efd4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x33efd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x33efd8: 0xac231a50  sw          $v1, 0x1A50($at)
    ctx->pc = 0x33efd8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D1A50u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A50u, _value); } while (0);
    ctx->pc = 0x33efdcu;
}
