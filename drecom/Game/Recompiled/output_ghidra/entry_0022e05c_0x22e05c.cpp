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

// Function: entry_0022e05c
// Address: 0x22e05c - 0x22e0f4
void entry_0022e05c_0x22e05c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022e05c_0x22e05c");
#endif

    switch (ctx->pc) {
        case 0x22e068u: goto label_22e068;
        default: break;
    }

    ctx->pc = 0x22e05cu;

    // 0x22e05c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x22e05cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x22e060: 0xc097b94  jal         func_25EE50
    ctx->pc = 0x22E060u;
    SET_GPR_U32(ctx, 31, 0x22E068u);
    ctx->pc = 0x25EE50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25EE50u, 0x22E060u, 0x22E068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E068u;
label_22e068:
    // 0x22e068: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x22e068u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x22e06c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x22e06cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x22e070: 0xa06410a8  sb          $a0, 0x10A8($v1)
    ctx->pc = 0x22e070u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 4));
    // 0x22e074: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x22e074u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x22e078: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x22e078u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x22e07c: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x22e07cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
    // 0x22e080: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x22e080u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x22e084: 0x8fa50018  lw          $a1, 0x18($sp)
    ctx->pc = 0x22e084u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x22e088: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x22e088u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x22e08c: 0x2403fffd  addiu       $v1, $zero, -0x3
    ctx->pc = 0x22e08cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x22e090: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x22e090u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x22e094: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x22e094u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x22e098: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x22e098u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x22e09c: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x22e09cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22e0a0: 0x3c03457a  lui         $v1, 0x457A
    ctx->pc = 0x22e0a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17786 << 16));
    // 0x22e0a4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x22e0a4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22e0a8: 0x0  nop
    ctx->pc = 0x22e0a8u;
    // NOP
    // 0x22e0ac: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x22e0acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22e0b0: 0x0  nop
    ctx->pc = 0x22e0b0u;
    // NOP
    // 0x22e0b4: 0x45000073  bc1f        . + 4 + (0x73 << 2)
    ctx->pc = 0x22E0B4u;
    {
        const bool branch_taken_0x22e0b4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x22e0b4) {
            ctx->pc = 0x22E284u;
            return;
        }
    }
    ctx->pc = 0x22E0BCu;
    // 0x22e0bc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x22e0bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x22e0c0: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x22e0c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x22e0c4: 0x30631000  andi        $v1, $v1, 0x1000
    ctx->pc = 0x22e0c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4096);
    // 0x22e0c8: 0x1460006e  bnez        $v1, . + 4 + (0x6E << 2)
    ctx->pc = 0x22E0C8u;
    {
        const bool branch_taken_0x22e0c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x22e0c8) {
            ctx->pc = 0x22E284u;
            return;
        }
    }
    ctx->pc = 0x22E0D0u;
    // 0x22e0d0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x22e0d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22e0d4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x22e0d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x22e0d8: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x22e0d8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x22e0dc: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x22e0dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x22e0e0: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x22e0e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x22e0e4: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x22e0e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x22e0e8: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x22e0e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x22e0ec: 0x10000065  b           . + 4 + (0x65 << 2)
    ctx->pc = 0x22E0ECu;
    {
        const bool branch_taken_0x22e0ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22e0ec) {
            ctx->pc = 0x22E284u;
            return;
        }
    }
    ctx->pc = 0x22E0F4u;
}
