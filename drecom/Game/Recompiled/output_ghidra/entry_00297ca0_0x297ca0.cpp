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

// Function: entry_00297ca0
// Address: 0x297ca0 - 0x297d30
void entry_00297ca0_0x297ca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00297ca0_0x297ca0");
#endif

    ctx->pc = 0x297ca0u;

    // 0x297ca0: 0x2e03000e  sltiu       $v1, $s0, 0xE
    ctx->pc = 0x297ca0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)14) ? 1 : 0);
    // 0x297ca4: 0x1460ffdb  bnez        $v1, . + 4 + (-0x25 << 2)
    ctx->pc = 0x297CA4u;
    {
        const bool branch_taken_0x297ca4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x297ca4) {
            ctx->pc = 0x297C14u;
            return;
        }
    }
    ctx->pc = 0x297CACu;
    // 0x297cac: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x297cacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x297cb0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x297cb0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x297cb4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x297cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x297cb8: 0x24631334  addiu       $v1, $v1, 0x1334
    ctx->pc = 0x297cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4916));
    // 0x297cbc: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x297cbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x297cc0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x297cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x297cc4: 0xac601348  sw          $zero, 0x1348($v1)
    ctx->pc = 0x297cc4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4936), GPR_U32(ctx, 0));
    // 0x297cc8: 0x3c0346bb  lui         $v1, 0x46BB
    ctx->pc = 0x297cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18107 << 16));
    // 0x297ccc: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x297cccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x297cd0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x297cd0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x297cd4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x297cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x297cd8: 0xe46011e8  swc1        $f0, 0x11E8($v1)
    ctx->pc = 0x297cd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4584), bits); }
    // 0x297cdc: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x297cdcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x297ce0: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x297ce0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x297ce4: 0x2403fff7  addiu       $v1, $zero, -0x9
    ctx->pc = 0x297ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x297ce8: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x297ce8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x297cec: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x297cecu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x297cf0: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x297cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x297cf4: 0x246468c0  addiu       $a0, $v1, 0x68C0
    ctx->pc = 0x297cf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 26816));
    // 0x297cf8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x297cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x297cfc: 0xac641228  sw          $a0, 0x1228($v1)
    ctx->pc = 0x297cfcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4648), GPR_U32(ctx, 4));
    // 0x297d00: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x297d00u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x297d04: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x297d04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x297d08: 0xac64121c  sw          $a0, 0x121C($v1)
    ctx->pc = 0x297d08u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4636), GPR_U32(ctx, 4));
    // 0x297d0c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x297d0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x297d10: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x297d10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x297d14: 0xa0641219  sb          $a0, 0x1219($v1)
    ctx->pc = 0x297d14u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4633), (uint8_t)GPR_U32(ctx, 4));
    // 0x297d18: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x297d18u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x297d1c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x297d1cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x297d20: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x297d20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x297d24: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x297d24u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x297d28: 0x3e00008  jr          $ra
    ctx->pc = 0x297D28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x297D28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x297D30u;
}
