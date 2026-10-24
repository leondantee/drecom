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

// Function: entry_002f8544
// Address: 0x2f8544 - 0x2f85e0
void entry_002f8544_0x2f8544(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002f8544_0x2f8544");
#endif

    switch (ctx->pc) {
        case 0x2f854cu: goto label_2f854c;
        case 0x2f85bcu: goto label_2f85bc;
        default: break;
    }

    ctx->pc = 0x2f8544u;

    // 0x2f8544: 0xc067648  jal         func_19D920
    ctx->pc = 0x2F8544u;
    SET_GPR_U32(ctx, 31, 0x2F854Cu);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2F8544u, 0x2F854Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F854Cu;
label_2f854c:
    // 0x2f854c: 0x3c0540a0  lui         $a1, 0x40A0
    ctx->pc = 0x2f854cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16544 << 16));
    // 0x2f8550: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x2f8550u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f8554: 0x0  nop
    ctx->pc = 0x2f8554u;
    // NOP
    // 0x2f8558: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2f8558u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f855c: 0x3c034234  lui         $v1, 0x4234
    ctx->pc = 0x2f855cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16948 << 16));
    // 0x2f8560: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2f8560u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f8564: 0x0  nop
    ctx->pc = 0x2f8564u;
    // NOP
    // 0x2f8568: 0x46010340  add.s       $f13, $f0, $f1
    ctx->pc = 0x2f8568u;
    ctx->f[13] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2f856c: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x2f856cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x2f8570: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2f8570u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2f8574: 0x8fa70048  lw          $a3, 0x48($sp)
    ctx->pc = 0x2f8574u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2f8578: 0x26080009  addiu       $t0, $s0, 0x9
    ctx->pc = 0x2f8578u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 9));
    // 0x2f857c: 0x3c0541f0  lui         $a1, 0x41F0
    ctx->pc = 0x2f857cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16880 << 16));
    // 0x2f8580: 0x44856000  mtc1        $a1, $f12
    ctx->pc = 0x2f8580u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2f8584: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x2f8584u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x2f8588: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x2f8588u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2f858c: 0x8c8400c4  lw          $a0, 0xC4($a0)
    ctx->pc = 0x2f858cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 196)));
    // 0x2f8590: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x2f8590u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2f8594: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x2f8594u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x2f8598: 0x24661a80  addiu       $a2, $v1, 0x1A80
    ctx->pc = 0x2f8598u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 6784));
    // 0x2f859c: 0x8ce700c4  lw          $a3, 0xC4($a3)
    ctx->pc = 0x2f859cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 196)));
    // 0x2f85a0: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x2f85a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x2f85a4: 0x24691a80  addiu       $t1, $v1, 0x1A80
    ctx->pc = 0x2f85a4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), 6784));
    // 0x2f85a8: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x2f85a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x2f85ac: 0x246a1a80  addiu       $t2, $v1, 0x1A80
    ctx->pc = 0x2f85acu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), 6784));
    // 0x2f85b0: 0x70005e28  paddub      $t3, $zero, $zero
    ctx->pc = 0x2f85b0u;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2f85b4: 0xc0c8cc0  jal         func_323300
    ctx->pc = 0x2F85B4u;
    SET_GPR_U32(ctx, 31, 0x2F85BCu);
    ctx->pc = 0x323300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323300u, 0x2F85B4u, 0x2F85BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F85BCu;
label_2f85bc:
    // 0x2f85bc: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x2f85bcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2f85c0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2f85c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f85c4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2f85c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2f85c8: 0xa0640100  sb          $a0, 0x100($v1)
    ctx->pc = 0x2f85c8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 256), (uint8_t)GPR_U32(ctx, 4));
    // 0x2f85cc: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x2f85ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2f85d0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2f85d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2f85d4: 0xa0640101  sb          $a0, 0x101($v1)
    ctx->pc = 0x2f85d4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 257), (uint8_t)GPR_U32(ctx, 4));
    // 0x2f85d8: 0x10000165  b           . + 4 + (0x165 << 2)
    ctx->pc = 0x2F85D8u;
    {
        const bool branch_taken_0x2f85d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f85d8) {
            ctx->pc = 0x2F8B70u;
            return;
        }
    }
    ctx->pc = 0x2F85E0u;
}
