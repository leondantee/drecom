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

// Function: entry_001d5b60
// Address: 0x1d5b60 - 0x1d5c90
void entry_001d5b60_0x1d5b60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d5b60_0x1d5b60");
#endif

    switch (ctx->pc) {
        case 0x1d5bccu: goto label_1d5bcc;
        case 0x1d5c04u: goto label_1d5c04;
        default: break;
    }

    ctx->pc = 0x1d5b60u;

    // 0x1d5b60: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1d5b60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x1d5b64: 0x24429260  addiu       $v0, $v0, -0x6DA0
    ctx->pc = 0x1d5b64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939232));
    // 0x1d5b68: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1d5b68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1d5b6c: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x1d5b6cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d5b70: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1d5b70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1d5b74: 0x3042007f  andi        $v0, $v0, 0x7F
    ctx->pc = 0x1d5b74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)127);
    // 0x1d5b78: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1d5b78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1d5b7c: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x1d5b7cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1d5b80: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x1d5b80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x1d5b84: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1d5b84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1d5b88: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1d5b88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1d5b8c: 0x2222021  addu        $a0, $s1, $v0
    ctx->pc = 0x1d5b8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1d5b90: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1d5b90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x1d5b94: 0x24429260  addiu       $v0, $v0, -0x6DA0
    ctx->pc = 0x1d5b94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939232));
    // 0x1d5b98: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1d5b98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1d5b9c: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x1d5b9cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d5ba0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1d5ba0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1d5ba4: 0x3042007f  andi        $v0, $v0, 0x7F
    ctx->pc = 0x1d5ba4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)127);
    // 0x1d5ba8: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1d5ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1d5bac: 0x8fa201a8  lw          $v0, 0x1A8($sp)
    ctx->pc = 0x1d5bacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x1d5bb0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d5bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d5bb4: 0x248400a0  addiu       $a0, $a0, 0xA0
    ctx->pc = 0x1d5bb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 160));
    // 0x1d5bb8: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x1d5bb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1d5bbc: 0x24460800  addiu       $a2, $v0, 0x800
    ctx->pc = 0x1d5bbcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 2048));
    // 0x1d5bc0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1d5bc0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d5bc4: 0xc040eb2  jal         func_103AC8
    ctx->pc = 0x1D5BC4u;
    SET_GPR_U32(ctx, 31, 0x1D5BCCu);
    ctx->pc = 0x103AC8u;
    {
        ctx->pc = 0x1D5BCCu;
        ps2_stubs::sceVu0RotTransPers(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1D5BCCu) { return; }
    ctx->pc = 0x1D5BCCu;
label_1d5bcc:
    // 0x1d5bcc: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1d5bccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x1d5bd0: 0x24429260  addiu       $v0, $v0, -0x6DA0
    ctx->pc = 0x1d5bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939232));
    // 0x1d5bd4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1d5bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1d5bd8: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x1d5bd8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d5bdc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1d5bdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1d5be0: 0x3042007f  andi        $v0, $v0, 0x7F
    ctx->pc = 0x1d5be0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)127);
    // 0x1d5be4: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1d5be4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1d5be8: 0x8fa201a8  lw          $v0, 0x1A8($sp)
    ctx->pc = 0x1d5be8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x1d5bec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d5becu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d5bf0: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x1d5bf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x1d5bf4: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x1d5bf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1d5bf8: 0x24460800  addiu       $a2, $v0, 0x800
    ctx->pc = 0x1d5bf8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 2048));
    // 0x1d5bfc: 0xc04f958  jal         func_13E560
    ctx->pc = 0x1D5BFCu;
    SET_GPR_U32(ctx, 31, 0x1D5C04u);
    ctx->pc = 0x13E560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E560u, 0x1D5BFCu, 0x1D5C04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5C04u;
label_1d5c04:
    // 0x1d5c04: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x1d5c04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x1d5c08: 0x2629825  or          $s3, $s3, $v0
    ctx->pc = 0x1d5c08u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | GPR_U64(ctx, 2));
    // 0x1d5c0c: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x1d5c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x1d5c10: 0x50f021  addu        $fp, $v0, $s0
    ctx->pc = 0x1d5c10u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1d5c14: 0x1e1100  sll         $v0, $fp, 4
    ctx->pc = 0x1d5c14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 30), 4));
    // 0x1d5c18: 0x222a821  addu        $s5, $s1, $v0
    ctx->pc = 0x1d5c18u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1d5c1c: 0x8ea200a0  lw          $v0, 0xA0($s5)
    ctx->pc = 0x1d5c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 160)));
    // 0x1d5c20: 0x24429000  addiu       $v0, $v0, -0x7000
    ctx->pc = 0x1d5c20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938624));
    // 0x1d5c24: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d5c24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d5c28: 0x0  nop
    ctx->pc = 0x1d5c28u;
    // NOP
    // 0x1d5c2c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1d5c2cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1d5c30: 0xe7a00194  swc1        $f0, 0x194($sp)
    ctx->pc = 0x1d5c30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 404), bits); }
    // 0x1d5c34: 0x3c024600  lui         $v0, 0x4600
    ctx->pc = 0x1d5c34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17920 << 16));
    // 0x1d5c38: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1d5c38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d5c3c: 0xc7a00194  lwc1        $f0, 0x194($sp)
    ctx->pc = 0x1d5c3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 404)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d5c40: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1d5c40u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x1d5c44: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x1d5c44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x1d5c48: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1d5c48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1d5c4c: 0x2b100  sll         $s6, $v0, 4
    ctx->pc = 0x1d5c4cu;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1d5c50: 0x2361021  addu        $v0, $s1, $s6
    ctx->pc = 0x1d5c50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 22)));
    // 0x1d5c54: 0xe4400080  swc1        $f0, 0x80($v0)
    ctx->pc = 0x1d5c54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 128), bits); }
    // 0x1d5c58: 0x24170005  addiu       $s7, $zero, 0x5
    ctx->pc = 0x1d5c58u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1d5c5c: 0x217001b  divu        $zero, $s0, $s7
    ctx->pc = 0x1d5c5cu;
    { uint32_t divisor = GPR_U32(ctx, 23); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 16) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 16) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,16); } }
    // 0x1d5c60: 0x0  nop
    ctx->pc = 0x1d5c60u;
    // NOP
    // 0x1d5c64: 0x0  nop
    ctx->pc = 0x1d5c64u;
    // NOP
    // 0x1d5c68: 0x1010  mfhi        $v0
    ctx->pc = 0x1d5c68u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1d5c6c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D5C6Cu;
    {
        const bool branch_taken_0x1d5c6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d5c6c) {
            ctx->pc = 0x1D5C90u;
            return;
        }
    }
    ctx->pc = 0x1D5C74u;
    // 0x1d5c74: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x1d5c74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x1d5c78: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1d5c78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1d5c7c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1d5c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1d5c80: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1d5c80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1d5c84: 0xc4400080  lwc1        $f0, 0x80($v0)
    ctx->pc = 0x1d5c84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d5c88: 0xe7a0019c  swc1        $f0, 0x19C($sp)
    ctx->pc = 0x1d5c88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 412), bits); }
    // 0x1d5c8c: 0x0  nop
    ctx->pc = 0x1d5c8cu;
    // NOP
    ctx->pc = 0x1d5c90u;
}
