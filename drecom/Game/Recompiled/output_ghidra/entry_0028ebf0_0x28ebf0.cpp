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

// Function: entry_0028ebf0
// Address: 0x28ebf0 - 0x28ec3c
void entry_0028ebf0_0x28ebf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0028ebf0_0x28ebf0");
#endif

    switch (ctx->pc) {
        case 0x28ec34u: goto label_28ec34;
        default: break;
    }

    ctx->pc = 0x28ebf0u;

    // 0x28ebf0: 0x92036624  lbu         $v1, 0x6624($s0)
    ctx->pc = 0x28ebf0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 26148)));
    // 0x28ebf4: 0x306600ff  andi        $a2, $v1, 0xFF
    ctx->pc = 0x28ebf4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x28ebf8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x28ebf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28ebfc: 0x14c3000f  bne         $a2, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x28EBFCu;
    {
        const bool branch_taken_0x28ebfc = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        if (branch_taken_0x28ebfc) {
            ctx->pc = 0x28EC3Cu;
            return;
        }
    }
    ctx->pc = 0x28EC04u;
    // 0x28ec04: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x28ec04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x28ec08: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x28ec08u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x28ec0c: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x28ec0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x28ec10: 0x34431048  ori         $v1, $v0, 0x1048
    ctx->pc = 0x28ec10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4168);
    // 0x28ec14: 0xae230004  sw          $v1, 0x4($s1)
    ctx->pc = 0x28ec14u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
    // 0x28ec18: 0x3c130003  lui         $s3, 0x3
    ctx->pc = 0x28ec18u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)3 << 16));
    // 0x28ec1c: 0xfe330008  sd          $s3, 0x8($s1)
    ctx->pc = 0x28ec1cu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 19));
    // 0x28ec20: 0x2614000c  addiu       $s4, $s0, 0xC
    ctx->pc = 0x28ec20u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x28ec24: 0x72802628  paddub      $a0, $s4, $zero
    ctx->pc = 0x28ec24u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x28ec28: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x28ec28u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x28ec2c: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x28EC2Cu;
    SET_GPR_U32(ctx, 31, 0x28EC34u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x28EC2Cu, 0x28EC34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28EC34u;
label_28ec34:
    // 0x28ec34: 0x26260010  addiu       $a2, $s1, 0x10
    ctx->pc = 0x28ec34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x28ec38: 0x70c08e28  paddub      $s1, $a2, $zero
    ctx->pc = 0x28ec38u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    ctx->pc = 0x28ec3cu;
}
