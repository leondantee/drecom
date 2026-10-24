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

// Function: entry_00167238
// Address: 0x167238 - 0x167288
void entry_00167238_0x167238(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00167238_0x167238");
#endif

    switch (ctx->pc) {
        case 0x16725cu: goto label_16725c;
        case 0x167274u: goto label_167274;
        default: break;
    }

    ctx->pc = 0x167238u;

    // 0x167238: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x167238u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x16723c: 0x5d2021  addu        $a0, $v0, $sp
    ctx->pc = 0x16723cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x167240: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x167240u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x167244: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x167244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x167248: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x167248u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x16724c: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x16724cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x167250: 0x8fa600a0  lw          $a2, 0xA0($sp)
    ctx->pc = 0x167250u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x167254: 0xc040c80  jal         func_103200
    ctx->pc = 0x167254u;
    SET_GPR_U32(ctx, 31, 0x16725Cu);
    ctx->pc = 0x103200u;
    {
        ctx->pc = 0x16725Cu;
        ps2_stubs::sceVu0SubVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x16725Cu) { return; }
    ctx->pc = 0x16725Cu;
label_16725c:
    // 0x16725c: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x16725cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x167260: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x167260u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x167264: 0x24440020  addiu       $a0, $v0, 0x20
    ctx->pc = 0x167264u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x167268: 0x8fa50098  lw          $a1, 0x98($sp)
    ctx->pc = 0x167268u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x16726c: 0xc040c1a  jal         func_103068
    ctx->pc = 0x16726Cu;
    SET_GPR_U32(ctx, 31, 0x167274u);
    ctx->pc = 0x103068u;
    {
        ctx->pc = 0x167274u;
        ps2_stubs::sceVu0InnerProduct(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x167274u) { return; }
    ctx->pc = 0x167274u;
label_167274:
    // 0x167274: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x167274u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x167278: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x167278u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x16727c: 0xe4400080  swc1        $f0, 0x80($v0)
    ctx->pc = 0x16727cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 128), bits); }
    // 0x167280: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x167280u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x167284: 0x0  nop
    ctx->pc = 0x167284u;
    // NOP
    ctx->pc = 0x167288u;
}
