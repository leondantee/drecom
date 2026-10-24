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

// Function: entry_002525d4
// Address: 0x2525d4 - 0x2526c0
void entry_002525d4_0x2525d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002525d4_0x2525d4");
#endif

    switch (ctx->pc) {
        case 0x2525e4u: goto label_2525e4;
        case 0x25266cu: goto label_25266c;
        default: break;
    }

    ctx->pc = 0x2525d4u;

    // 0x2525d4: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x2525d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2525d8: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x2525d8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x2525dc: 0xc094d64  jal         func_253590
    ctx->pc = 0x2525DCu;
    SET_GPR_U32(ctx, 31, 0x2525E4u);
    ctx->pc = 0x253590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253590u, 0x2525DCu, 0x2525E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2525E4u;
label_2525e4:
    // 0x2525e4: 0x10400101  beqz        $v0, . + 4 + (0x101 << 2)
    ctx->pc = 0x2525E4u;
    {
        const bool branch_taken_0x2525e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2525e4) {
            ctx->pc = 0x2529ECu;
            return;
        }
    }
    ctx->pc = 0x2525ECu;
    // 0x2525ec: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x2525ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2525f0: 0x8c500104  lw          $s0, 0x104($v0)
    ctx->pc = 0x2525f0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
    // 0x2525f4: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x2525f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2525f8: 0x244200a0  addiu       $v0, $v0, 0xA0
    ctx->pc = 0x2525f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x2525fc: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x2525fcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x252600: 0x27a20050  addiu       $v0, $sp, 0x50
    ctx->pc = 0x252600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x252604: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x252604u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x252608: 0x26220190  addiu       $v0, $s1, 0x190
    ctx->pc = 0x252608u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 400));
    // 0x25260c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x25260cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x252610: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x252610u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x252614: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x252614u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x252618: 0x7a030000  lq          $v1, 0x0($s0)
    ctx->pc = 0x252618u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x25261c: 0x27a20070  addiu       $v0, $sp, 0x70
    ctx->pc = 0x25261cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x252620: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x252620u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x252624: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x252624u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x252628: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x252628u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25262c: 0x27a20080  addiu       $v0, $sp, 0x80
    ctx->pc = 0x25262cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x252630: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x252630u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x252634: 0x26020020  addiu       $v0, $s0, 0x20
    ctx->pc = 0x252634u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x252638: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x252638u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25263c: 0x27a20090  addiu       $v0, $sp, 0x90
    ctx->pc = 0x25263cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x252640: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x252640u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x252644: 0x26020030  addiu       $v0, $s0, 0x30
    ctx->pc = 0x252644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x252648: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x252648u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25264c: 0x27a200a0  addiu       $v0, $sp, 0xA0
    ctx->pc = 0x25264cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x252650: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x252650u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x252654: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x252654u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x252658: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x252658u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x25265c: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x25265cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x252660: 0x240707c0  addiu       $a3, $zero, 0x7C0
    ctx->pc = 0x252660u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1984));
    // 0x252664: 0xc059e1c  jal         func_167870
    ctx->pc = 0x252664u;
    SET_GPR_U32(ctx, 31, 0x25266Cu);
    ctx->pc = 0x167870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167870u, 0x252664u, 0x25266Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25266Cu;
label_25266c:
    // 0x25266c: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x25266cu;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x252670: 0x164000de  bnez        $s2, . + 4 + (0xDE << 2)
    ctx->pc = 0x252670u;
    {
        const bool branch_taken_0x252670 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x252670) {
            ctx->pc = 0x2529ECu;
            return;
        }
    }
    ctx->pc = 0x252678u;
    // 0x252678: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x252678u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25267c: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x25267cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x252680: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x252680u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x252684: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x252684u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x252688: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x252688u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x25268c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x25268cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x252690: 0x0  nop
    ctx->pc = 0x252690u;
    // NOP
    // 0x252694: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x252694u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x252698: 0x0  nop
    ctx->pc = 0x252698u;
    // NOP
    // 0x25269c: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x25269Cu;
    {
        const bool branch_taken_0x25269c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x25269c) {
            ctx->pc = 0x2526C0u;
            return;
        }
    }
    ctx->pc = 0x2526A4u;
    // 0x2526a4: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x2526a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2526a8: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x2526a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2526ac: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2526acu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2526b0: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2526b0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2526b4: 0xe7a000d8  swc1        $f0, 0xD8($sp)
    ctx->pc = 0x2526b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x2526b8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2526B8u;
    {
        const bool branch_taken_0x2526b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2526b8) {
            ctx->pc = 0x2526D0u;
            return;
        }
    }
    ctx->pc = 0x2526C0u;
}
