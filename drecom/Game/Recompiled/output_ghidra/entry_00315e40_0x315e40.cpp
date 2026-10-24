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

// Function: entry_00315e40
// Address: 0x315e40 - 0x315ef0
void entry_00315e40_0x315e40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00315e40_0x315e40");
#endif

    switch (ctx->pc) {
        case 0x315e48u: goto label_315e48;
        case 0x315ec0u: goto label_315ec0;
        default: break;
    }

    ctx->pc = 0x315e40u;

    // 0x315e40: 0xc06766c  jal         func_19D9B0
    ctx->pc = 0x315E40u;
    SET_GPR_U32(ctx, 31, 0x315E48u);
    ctx->pc = 0x19D9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D9B0u, 0x315E40u, 0x315E48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315E48u;
label_315e48:
    // 0x315e48: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x315e48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x315e4c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x315e4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x315e50: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x315e50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x315e54: 0x0  nop
    ctx->pc = 0x315e54u;
    // NOP
    // 0x315e58: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x315e58u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x315e5c: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x315e5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x315e60: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x315e60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
    // 0x315e64: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x315e64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x315e68: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x315e68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x315e6c: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x315e6cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x315e70: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x315e70u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x315e74: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x315e74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x315e78: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x315e78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x315e7c: 0xe44012cc  swc1        $f0, 0x12CC($v0)
    ctx->pc = 0x315e7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4812), bits); }
    // 0x315e80: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x315e80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
    // 0x315e84: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x315e84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x315e88: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x315e88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x315e8c: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x315e8cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x315e90: 0x26020003  addiu       $v0, $s0, 0x3
    ctx->pc = 0x315e90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 3));
    // 0x315e94: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x315e94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x315e98: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x315e98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x315e9c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x315e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x315ea0: 0xe44012cc  swc1        $f0, 0x12CC($v0)
    ctx->pc = 0x315ea0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4812), bits); }
    // 0x315ea4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x315ea4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x315ea8: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x315ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x315eac: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x315eacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x315eb0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x315eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x315eb4: 0xac44128c  sw          $a0, 0x128C($v0)
    ctx->pc = 0x315eb4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4748), GPR_U32(ctx, 4));
    // 0x315eb8: 0xc067694  jal         func_19DA50
    ctx->pc = 0x315EB8u;
    SET_GPR_U32(ctx, 31, 0x315EC0u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x315EB8u, 0x315EC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315EC0u;
label_315ec0:
    // 0x315ec0: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x315ec0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x315ec4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x315ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x315ec8: 0x83001a  div         $zero, $a0, $v1
    ctx->pc = 0x315ec8u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x315ecc: 0x0  nop
    ctx->pc = 0x315eccu;
    // NOP
    // 0x315ed0: 0x0  nop
    ctx->pc = 0x315ed0u;
    // NOP
    // 0x315ed4: 0x2810  mfhi        $a1
    ctx->pc = 0x315ed4u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x315ed8: 0x26030003  addiu       $v1, $s0, 0x3
    ctx->pc = 0x315ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 3));
    // 0x315edc: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x315edcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x315ee0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x315ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x315ee4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x315ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x315ee8: 0xac65128c  sw          $a1, 0x128C($v1)
    ctx->pc = 0x315ee8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4748), GPR_U32(ctx, 5));
    // 0x315eec: 0x0  nop
    ctx->pc = 0x315eecu;
    // NOP
    ctx->pc = 0x315ef0u;
}
