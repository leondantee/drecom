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

// Function: entry_00196614
// Address: 0x196614 - 0x19663c
void entry_00196614_0x196614(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00196614_0x196614");
#endif

    ctx->pc = 0x196614u;

    // 0x196614: 0xc6a10014  lwc1        $f1, 0x14($s5)
    ctx->pc = 0x196614u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x196618: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x196618u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x19661c: 0x203b021  addu        $s6, $s0, $v1
    ctx->pc = 0x19661cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x196620: 0xc6c00004  lwc1        $f0, 0x4($s6)
    ctx->pc = 0x196620u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x196624: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x196624u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x196628: 0xe6c00004  swc1        $f0, 0x4($s6)
    ctx->pc = 0x196628u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 4), bits); }
    // 0x19662c: 0x72e0b628  paddub      $s6, $s7, $zero
    ctx->pc = 0x19662cu;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 23), GPR_VEC(ctx, 0)));
    // 0x196630: 0x27de0001  addiu       $fp, $fp, 0x1
    ctx->pc = 0x196630u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
    // 0x196634: 0x1000ff02  b           . + 4 + (-0xFE << 2)
    ctx->pc = 0x196634u;
    {
        const bool branch_taken_0x196634 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x196634) {
            ctx->pc = 0x196240u;
            return;
        }
    }
    ctx->pc = 0x19663Cu;
}
