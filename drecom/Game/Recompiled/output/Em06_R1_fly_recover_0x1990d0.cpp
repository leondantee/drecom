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

// Function: Em06_R1_fly_recover
// Address: 0x1990d0 - 0x1991e0
void Em06_R1_fly_recover_0x1990d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em06_R1_fly_recover_0x1990d0");
#endif

    switch (ctx->pc) {
        case 0x199124u: goto label_199124;
        case 0x199174u: goto label_199174;
        case 0x199180u: goto label_199180;
        default: break;
    }

    ctx->pc = 0x1990d0u;

    // 0x1990d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1990d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1990d4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x1990d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x1990d8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x1990d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x1990dc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1990dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1990e0: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x1990e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x1990e4: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1990e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1990e8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1990e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1990ec: 0x10830011  beq         $a0, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x1990ECu;
    {
        const bool branch_taken_0x1990ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1990ec) {
            ctx->pc = 0x199134u;
            goto label_199134;
        }
    }
    ctx->pc = 0x1990F4u;
    // 0x1990f4: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1990F4u;
    {
        const bool branch_taken_0x1990f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1990f4) {
            ctx->pc = 0x199104u;
            goto label_199104;
        }
    }
    ctx->pc = 0x1990FCu;
    // 0x1990fc: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x1990FCu;
    {
        const bool branch_taken_0x1990fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1990fc) {
            ctx->pc = 0x1991D0u;
            goto label_1991d0;
        }
    }
    ctx->pc = 0x199104u;
label_199104:
    // 0x199104: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x199104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x199108: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x199108u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19910c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x19910cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x199110: 0x24061e2a  addiu       $a2, $zero, 0x1E2A
    ctx->pc = 0x199110u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7722));
    // 0x199114: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x199114u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x199118: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x199118u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x19911c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x19911Cu;
    SET_GPR_U32(ctx, 31, 0x199124u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x19911Cu, 0x199124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199124u;
label_199124:
    // 0x199124: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x199124u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x199128: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x199128u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x19912c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x19912cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x199130: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x199130u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_199134:
    // 0x199134: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x199134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x199138: 0xc4410184  lwc1        $f1, 0x184($v0)
    ctx->pc = 0x199138u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19913c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x19913cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x199140: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x199140u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x199144: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x199144u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x199148: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x199148u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x19914c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x19914cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x199150: 0xc4411280  lwc1        $f1, 0x1280($v0)
    ctx->pc = 0x199150u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x199154: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x199154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x199158: 0xc4400184  lwc1        $f0, 0x184($v0)
    ctx->pc = 0x199158u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19915c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x19915cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x199160: 0xe4400184  swc1        $f0, 0x184($v0)
    ctx->pc = 0x199160u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 388), bits); }
    // 0x199164: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x199164u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x199168: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x199168u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x19916c: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x19916Cu;
    SET_GPR_U32(ctx, 31, 0x199174u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x19916Cu, 0x199174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199174u;
label_199174:
    // 0x199174: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x199174u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x199178: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x199178u;
    SET_GPR_U32(ctx, 31, 0x199180u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x199178u, 0x199180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199180u;
label_199180:
    // 0x199180: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x199180u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x199184: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x199184u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x199188: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x199188u;
    {
        const bool branch_taken_0x199188 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x199188) {
            ctx->pc = 0x1991D0u;
            goto label_1991d0;
        }
    }
    ctx->pc = 0x199190u;
    // 0x199190: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x199190u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x199194: 0x908310a8  lbu         $v1, 0x10A8($a0)
    ctx->pc = 0x199194u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4264)));
    // 0x199198: 0x34630080  ori         $v1, $v1, 0x80
    ctx->pc = 0x199198u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)128);
    // 0x19919c: 0xa08310a8  sb          $v1, 0x10A8($a0)
    ctx->pc = 0x19919cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4264), (uint8_t)GPR_U32(ctx, 3));
    // 0x1991a0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1991a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1991a4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1991a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1991a8: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1991a8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1991ac: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x1991acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1991b0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1991b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1991b4: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x1991b4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x1991b8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1991b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1991bc: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x1991bcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1991c0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1991c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1991c4: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1991c4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1991c8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1991c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1991cc: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1991ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_1991d0:
    // 0x1991d0: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x1991d0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1991d4: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1991d4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1991d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1991D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1991D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1991E0u;
}
