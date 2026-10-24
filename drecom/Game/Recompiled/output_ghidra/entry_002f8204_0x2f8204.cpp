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

// Function: entry_002f8204
// Address: 0x2f8204 - 0x2f82b0
void entry_002f8204_0x2f8204(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002f8204_0x2f8204");
#endif

    switch (ctx->pc) {
        case 0x2f8214u: goto label_2f8214;
        case 0x2f828cu: goto label_2f828c;
        default: break;
    }

    ctx->pc = 0x2f8204u;

    // 0x2f8204: 0x3c0341f0  lui         $v1, 0x41F0
    ctx->pc = 0x2f8204u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16880 << 16));
    // 0x2f8208: 0x4483a000  mtc1        $v1, $f20
    ctx->pc = 0x2f8208u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2f820c: 0xc067648  jal         func_19D920
    ctx->pc = 0x2F820Cu;
    SET_GPR_U32(ctx, 31, 0x2F8214u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2F820Cu, 0x2F8214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F8214u;
label_2f8214:
    // 0x2f8214: 0x3c0440a0  lui         $a0, 0x40A0
    ctx->pc = 0x2f8214u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16544 << 16));
    // 0x2f8218: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x2f8218u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f821c: 0x0  nop
    ctx->pc = 0x2f821cu;
    // NOP
    // 0x2f8220: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2f8220u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f8224: 0x3c024234  lui         $v0, 0x4234
    ctx->pc = 0x2f8224u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16948 << 16));
    // 0x2f8228: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f8228u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f822c: 0x0  nop
    ctx->pc = 0x2f822cu;
    // NOP
    // 0x2f8230: 0x46010340  add.s       $f13, $f0, $f1
    ctx->pc = 0x2f8230u;
    ctx->f[13] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2f8234: 0x3c064120  lui         $a2, 0x4120
    ctx->pc = 0x2f8234u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16672 << 16));
    // 0x2f8238: 0x44867000  mtc1        $a2, $f14
    ctx->pc = 0x2f8238u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2f823c: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x2f823cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x2f8240: 0x8fa70048  lw          $a3, 0x48($sp)
    ctx->pc = 0x2f8240u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2f8244: 0x26020009  addiu       $v0, $s0, 0x9
    ctx->pc = 0x2f8244u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 9));
    // 0x2f8248: 0x8fa90048  lw          $t1, 0x48($sp)
    ctx->pc = 0x2f8248u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2f824c: 0x26030009  addiu       $v1, $s0, 0x9
    ctx->pc = 0x2f824cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 9));
    // 0x2f8250: 0x8cea00c4  lw          $t2, 0xC4($a3)
    ctx->pc = 0x2f8250u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 196)));
    // 0x2f8254: 0x71402628  paddub      $a0, $t2, $zero
    ctx->pc = 0x2f8254u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x2f8258: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x2f8258u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2f825c: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2f825cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2f8260: 0x24461a80  addiu       $a2, $v0, 0x1A80
    ctx->pc = 0x2f8260u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 6784));
    // 0x2f8264: 0x8d2700c4  lw          $a3, 0xC4($t1)
    ctx->pc = 0x2f8264u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 196)));
    // 0x2f8268: 0x70604628  paddub      $t0, $v1, $zero
    ctx->pc = 0x2f8268u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x2f826c: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x2f826cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x2f8270: 0x24691a90  addiu       $t1, $v1, 0x1A90
    ctx->pc = 0x2f8270u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), 6800));
    // 0x2f8274: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2f8274u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2f8278: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x2f8278u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x2f827c: 0x246a1a80  addiu       $t2, $v1, 0x1A80
    ctx->pc = 0x2f827cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), 6784));
    // 0x2f8280: 0x70005e28  paddub      $t3, $zero, $zero
    ctx->pc = 0x2f8280u;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2f8284: 0xc0c8cc0  jal         func_323300
    ctx->pc = 0x2F8284u;
    SET_GPR_U32(ctx, 31, 0x2F828Cu);
    ctx->pc = 0x323300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323300u, 0x2F8284u, 0x2F828Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F828Cu;
label_2f828c:
    // 0x2f828c: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x2f828cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2f8290: 0x24040063  addiu       $a0, $zero, 0x63
    ctx->pc = 0x2f8290u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
    // 0x2f8294: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2f8294u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2f8298: 0xa0640100  sb          $a0, 0x100($v1)
    ctx->pc = 0x2f8298u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 256), (uint8_t)GPR_U32(ctx, 4));
    // 0x2f829c: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x2f829cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2f82a0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2f82a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2f82a4: 0xa0640101  sb          $a0, 0x101($v1)
    ctx->pc = 0x2f82a4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 257), (uint8_t)GPR_U32(ctx, 4));
    // 0x2f82a8: 0x10000231  b           . + 4 + (0x231 << 2)
    ctx->pc = 0x2F82A8u;
    {
        const bool branch_taken_0x2f82a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f82a8) {
            ctx->pc = 0x2F8B70u;
            return;
        }
    }
    ctx->pc = 0x2F82B0u;
}
