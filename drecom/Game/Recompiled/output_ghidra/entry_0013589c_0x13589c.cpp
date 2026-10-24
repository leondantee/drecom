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

// Function: entry_0013589c
// Address: 0x13589c - 0x135948
void entry_0013589c_0x13589c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013589c_0x13589c");
#endif

    switch (ctx->pc) {
        case 0x1358d0u: goto label_1358d0;
        case 0x13592cu: goto label_13592c;
        default: break;
    }

    ctx->pc = 0x13589cu;

    // 0x13589c: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x13589cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1358a0: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x1358a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1358a4: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1358a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1358a8: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1358a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1358ac: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1358acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1358b0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1358b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1358b4: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1358b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1358b8: 0x8c8202d0  lw          $v0, 0x2D0($a0)
    ctx->pc = 0x1358b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 720)));
    // 0x1358bc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1358bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1358c0: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1358c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1358c4: 0x24450030  addiu       $a1, $v0, 0x30
    ctx->pc = 0x1358c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x1358c8: 0xc040c9e  jal         func_103278
    ctx->pc = 0x1358C8u;
    SET_GPR_U32(ctx, 31, 0x1358D0u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x1358D0u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1358D0u) { return; }
    ctx->pc = 0x1358D0u;
label_1358d0:
    // 0x1358d0: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x1358d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1358d4: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x1358d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1358d8: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1358d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1358dc: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1358dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1358e0: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1358e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1358e4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1358e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1358e8: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1358e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1358ec: 0x8c8202d0  lw          $v0, 0x2D0($a0)
    ctx->pc = 0x1358ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 720)));
    // 0x1358f0: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x1358f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1358f4: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x1358f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1358f8: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x1358f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1358fc: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1358fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x135900: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x135900u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x135904: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x135904u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x135908: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x135908u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x13590c: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x13590cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x135910: 0x8c8202d0  lw          $v0, 0x2D0($a0)
    ctx->pc = 0x135910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 720)));
    // 0x135914: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x135914u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x135918: 0x24a40030  addiu       $a0, $a1, 0x30
    ctx->pc = 0x135918u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x13591c: 0x24450030  addiu       $a1, $v0, 0x30
    ctx->pc = 0x13591cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x135920: 0x8fa600e0  lw          $a2, 0xE0($sp)
    ctx->pc = 0x135920u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x135924: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x135924u;
    SET_GPR_U32(ctx, 31, 0x13592Cu);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x135924u, 0x13592Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13592Cu;
label_13592c:
    // 0x13592c: 0x8fa300e0  lw          $v1, 0xE0($sp)
    ctx->pc = 0x13592cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x135930: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x135930u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x135934: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x135934u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x135938: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x135938u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13593c: 0x0  nop
    ctx->pc = 0x13593cu;
    // NOP
    // 0x135940: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x135940u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x135944: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x135944u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    ctx->pc = 0x135948u;
}
