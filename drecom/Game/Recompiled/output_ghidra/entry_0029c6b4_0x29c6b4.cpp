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

// Function: entry_0029c6b4
// Address: 0x29c6b4 - 0x29c740
void entry_0029c6b4_0x29c6b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0029c6b4_0x29c6b4");
#endif

    switch (ctx->pc) {
        case 0x29c700u: goto label_29c700;
        default: break;
    }

    ctx->pc = 0x29c6b4u;

label_29c6b4:
    // 0x29c6b4: 0x111900  sll         $v1, $s1, 4
    ctx->pc = 0x29c6b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
label_29c6b8:
    // 0x29c6b8: 0x711823  subu        $v1, $v1, $s1
    ctx->pc = 0x29c6b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_29c6bc:
    // 0x29c6bc: 0x32140  sll         $a0, $v1, 5
    ctx->pc = 0x29c6bcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_29c6c0:
    // 0x29c6c0: 0x3c030085  lui         $v1, 0x85
    ctx->pc = 0x29c6c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)133 << 16));
label_29c6c4:
    // 0x29c6c4: 0x24633590  addiu       $v1, $v1, 0x3590
    ctx->pc = 0x29c6c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 13712));
label_29c6c8:
    // 0x29c6c8: 0x648021  addu        $s0, $v1, $a0
    ctx->pc = 0x29c6c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_29c6cc:
    // 0x29c6cc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x29c6ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_29c6d0:
    // 0x29c6d0: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x29c6d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_29c6d4:
    // 0x29c6d4: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
label_29c6d8:
    if (ctx->pc == 0x29C6D8u) {
        ctx->pc = 0x29C6DCu;
        goto label_29c6dc;
    }
    ctx->pc = 0x29C6D4u;
    {
        const bool branch_taken_0x29c6d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x29c6d4) {
            ctx->pc = 0x29C740u;
            return;
        }
    }
    ctx->pc = 0x29C6DCu;
label_29c6dc:
    // 0x29c6dc: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x29c6dcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_29c6e0:
    // 0x29c6e0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x29c6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_29c6e4:
    // 0x29c6e4: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x29c6e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_29c6e8:
    // 0x29c6e8: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x29c6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_29c6ec:
    // 0x29c6ec: 0x24426910  addiu       $v0, $v0, 0x6910
    ctx->pc = 0x29c6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26896));
label_29c6f0:
    // 0x29c6f0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x29c6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_29c6f4:
    // 0x29c6f4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x29c6f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_29c6f8:
    // 0x29c6f8: 0x40f809  jalr        $v0
label_29c6fc:
    if (ctx->pc == 0x29C6FCu) {
        ctx->pc = 0x29C700u;
        goto label_29c700;
    }
    ctx->pc = 0x29C6F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x29C700u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29C6F8u, 0x29C700u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29C700u;
label_29c700:
    // 0x29c700: 0xc6010120  lwc1        $f1, 0x120($s0)
    ctx->pc = 0x29c700u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_29c704:
    // 0x29c704: 0xc6000130  lwc1        $f0, 0x130($s0)
    ctx->pc = 0x29c704u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_29c708:
    // 0x29c708: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x29c708u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_29c70c:
    // 0x29c70c: 0xe6000120  swc1        $f0, 0x120($s0)
    ctx->pc = 0x29c70cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 288), bits); }
label_29c710:
    // 0x29c710: 0xc6010124  lwc1        $f1, 0x124($s0)
    ctx->pc = 0x29c710u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_29c714:
    // 0x29c714: 0xc6000134  lwc1        $f0, 0x134($s0)
    ctx->pc = 0x29c714u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_29c718:
    // 0x29c718: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x29c718u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_29c71c:
    // 0x29c71c: 0xe6000124  swc1        $f0, 0x124($s0)
    ctx->pc = 0x29c71cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 292), bits); }
label_29c720:
    // 0x29c720: 0xc6010128  lwc1        $f1, 0x128($s0)
    ctx->pc = 0x29c720u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_29c724:
    // 0x29c724: 0xc6000138  lwc1        $f0, 0x138($s0)
    ctx->pc = 0x29c724u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_29c728:
    // 0x29c728: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x29c728u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_29c72c:
    // 0x29c72c: 0xe6000128  swc1        $f0, 0x128($s0)
    ctx->pc = 0x29c72cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 296), bits); }
label_29c730:
    // 0x29c730: 0xc601012c  lwc1        $f1, 0x12C($s0)
    ctx->pc = 0x29c730u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_29c734:
    // 0x29c734: 0xc600013c  lwc1        $f0, 0x13C($s0)
    ctx->pc = 0x29c734u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_29c738:
    // 0x29c738: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x29c738u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_29c73c:
    // 0x29c73c: 0xe600012c  swc1        $f0, 0x12C($s0)
    ctx->pc = 0x29c73cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 300), bits); }
    ctx->pc = 0x29c740u;
}
