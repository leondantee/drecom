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

// Function: entry_002f830c
// Address: 0x2f830c - 0x2f83a8
void entry_002f830c_0x2f830c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002f830c_0x2f830c");
#endif

    switch (ctx->pc) {
        case 0x2f831cu: goto label_2f831c;
        case 0x2f8388u: goto label_2f8388;
        default: break;
    }

    ctx->pc = 0x2f830cu;

    // 0x2f830c: 0x3c0841f0  lui         $t0, 0x41F0
    ctx->pc = 0x2f830cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16880 << 16));
    // 0x2f8310: 0x4488a000  mtc1        $t0, $f20
    ctx->pc = 0x2f8310u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2f8314: 0xc067648  jal         func_19D920
    ctx->pc = 0x2F8314u;
    SET_GPR_U32(ctx, 31, 0x2F831Cu);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2F8314u, 0x2F831Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F831Cu;
label_2f831c:
    // 0x2f831c: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x2f831cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x2f8320: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f8320u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f8324: 0x0  nop
    ctx->pc = 0x2f8324u;
    // NOP
    // 0x2f8328: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2f8328u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f832c: 0x3c094234  lui         $t1, 0x4234
    ctx->pc = 0x2f832cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)16948 << 16));
    // 0x2f8330: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x2f8330u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f8334: 0x0  nop
    ctx->pc = 0x2f8334u;
    // NOP
    // 0x2f8338: 0x46010340  add.s       $f13, $f0, $f1
    ctx->pc = 0x2f8338u;
    ctx->f[13] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2f833c: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x2f833cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x2f8340: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2f8340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2f8344: 0x8faa0048  lw          $t2, 0x48($sp)
    ctx->pc = 0x2f8344u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2f8348: 0x26080009  addiu       $t0, $s0, 0x9
    ctx->pc = 0x2f8348u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 9));
    // 0x2f834c: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x2f834cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x2f8350: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x2f8350u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2f8354: 0x8c4400c4  lw          $a0, 0xC4($v0)
    ctx->pc = 0x2f8354u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
    // 0x2f8358: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x2f8358u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2f835c: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x2f835cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x2f8360: 0x24661a80  addiu       $a2, $v1, 0x1A80
    ctx->pc = 0x2f8360u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 6784));
    // 0x2f8364: 0x8d4700c4  lw          $a3, 0xC4($t2)
    ctx->pc = 0x2f8364u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 196)));
    // 0x2f8368: 0x3c0c003b  lui         $t4, 0x3B
    ctx->pc = 0x2f8368u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)59 << 16));
    // 0x2f836c: 0x25891a80  addiu       $t1, $t4, 0x1A80
    ctx->pc = 0x2f836cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 12), 6784));
    // 0x2f8370: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2f8370u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2f8374: 0x3c0b003b  lui         $t3, 0x3B
    ctx->pc = 0x2f8374u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)59 << 16));
    // 0x2f8378: 0x256a1a80  addiu       $t2, $t3, 0x1A80
    ctx->pc = 0x2f8378u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 11), 6784));
    // 0x2f837c: 0x70005e28  paddub      $t3, $zero, $zero
    ctx->pc = 0x2f837cu;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2f8380: 0xc0c8cc0  jal         func_323300
    ctx->pc = 0x2F8380u;
    SET_GPR_U32(ctx, 31, 0x2F8388u);
    ctx->pc = 0x323300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323300u, 0x2F8380u, 0x2F8388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F8388u;
label_2f8388:
    // 0x2f8388: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2f8388u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f838c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2f838cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2f8390: 0xa0830100  sb          $v1, 0x100($a0)
    ctx->pc = 0x2f8390u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 256), (uint8_t)GPR_U32(ctx, 3));
    // 0x2f8394: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x2f8394u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2f8398: 0x8fa60048  lw          $a2, 0x48($sp)
    ctx->pc = 0x2f8398u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2f839c: 0xa0c30101  sb          $v1, 0x101($a2)
    ctx->pc = 0x2f839cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 257), (uint8_t)GPR_U32(ctx, 3));
    // 0x2f83a0: 0x100001f3  b           . + 4 + (0x1F3 << 2)
    ctx->pc = 0x2F83A0u;
    {
        const bool branch_taken_0x2f83a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f83a0) {
            ctx->pc = 0x2F8B70u;
            return;
        }
    }
    ctx->pc = 0x2F83A8u;
}
