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

// Function: entry_001f4b8c
// Address: 0x1f4b8c - 0x1f4c24
void entry_001f4b8c_0x1f4b8c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f4b8c_0x1f4b8c");
#endif

    switch (ctx->pc) {
        case 0x1f4b98u: goto label_1f4b98;
        default: break;
    }

    ctx->pc = 0x1f4b8cu;

    // 0x1f4b8c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x1f4b8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f4b90: 0xc097b94  jal         func_25EE50
    ctx->pc = 0x1F4B90u;
    SET_GPR_U32(ctx, 31, 0x1F4B98u);
    ctx->pc = 0x25EE50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25EE50u, 0x1F4B90u, 0x1F4B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4B98u;
label_1f4b98:
    // 0x1f4b98: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x1f4b98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1f4b9c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1f4b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f4ba0: 0xa06410a8  sb          $a0, 0x10A8($v1)
    ctx->pc = 0x1f4ba0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 4));
    // 0x1f4ba4: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x1f4ba4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f4ba8: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1f4ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1f4bac: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x1f4bacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
    // 0x1f4bb0: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x1f4bb0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x1f4bb4: 0x8fa50018  lw          $a1, 0x18($sp)
    ctx->pc = 0x1f4bb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f4bb8: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x1f4bb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1f4bbc: 0x2403fffd  addiu       $v1, $zero, -0x3
    ctx->pc = 0x1f4bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x1f4bc0: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1f4bc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1f4bc4: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x1f4bc4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x1f4bc8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1f4bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f4bcc: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x1f4bccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f4bd0: 0x3c03457a  lui         $v1, 0x457A
    ctx->pc = 0x1f4bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17786 << 16));
    // 0x1f4bd4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1f4bd4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f4bd8: 0x0  nop
    ctx->pc = 0x1f4bd8u;
    // NOP
    // 0x1f4bdc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1f4bdcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f4be0: 0x0  nop
    ctx->pc = 0x1f4be0u;
    // NOP
    // 0x1f4be4: 0x4500007a  bc1f        . + 4 + (0x7A << 2)
    ctx->pc = 0x1F4BE4u;
    {
        const bool branch_taken_0x1f4be4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f4be4) {
            ctx->pc = 0x1F4DD0u;
            return;
        }
    }
    ctx->pc = 0x1F4BECu;
    // 0x1f4bec: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1f4becu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f4bf0: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x1f4bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1f4bf4: 0x30631000  andi        $v1, $v1, 0x1000
    ctx->pc = 0x1f4bf4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4096);
    // 0x1f4bf8: 0x14600075  bnez        $v1, . + 4 + (0x75 << 2)
    ctx->pc = 0x1F4BF8u;
    {
        const bool branch_taken_0x1f4bf8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f4bf8) {
            ctx->pc = 0x1F4DD0u;
            return;
        }
    }
    ctx->pc = 0x1F4C00u;
    // 0x1f4c00: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1f4c00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f4c04: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1f4c04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f4c08: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x1f4c08u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x1f4c0c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x1f4c0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f4c10: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1f4c10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1f4c14: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x1f4c14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x1f4c18: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x1f4c18u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x1f4c1c: 0x1000006c  b           . + 4 + (0x6C << 2)
    ctx->pc = 0x1F4C1Cu;
    {
        const bool branch_taken_0x1f4c1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f4c1c) {
            ctx->pc = 0x1F4DD0u;
            return;
        }
    }
    ctx->pc = 0x1F4C24u;
}
