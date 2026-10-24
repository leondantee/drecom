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

// Function: entry_00374200
// Address: 0x374200 - 0x374260
void entry_00374200_0x374200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00374200_0x374200");
#endif

    ctx->pc = 0x374200u;

    // 0x374200: 0x8fa500a8  lw          $a1, 0xA8($sp)
    ctx->pc = 0x374200u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x374204: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x374204u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x374208: 0x722021  addu        $a0, $v1, $s2
    ctx->pc = 0x374208u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x37420c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x37420cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x374210: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x374210u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x374214: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x374214u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x374218: 0x8ca302d0  lw          $v1, 0x2D0($a1)
    ctx->pc = 0x374218u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 720)));
    // 0x37421c: 0x648021  addu        $s0, $v1, $a0
    ctx->pc = 0x37421cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x374220: 0x92030143  lbu         $v1, 0x143($s0)
    ctx->pc = 0x374220u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 323)));
    // 0x374224: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x374224u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x374228: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x374228u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x37422c: 0x1083000c  beq         $a0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x37422Cu;
    {
        const bool branch_taken_0x37422c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x37422c) {
            ctx->pc = 0x374260u;
            return;
        }
    }
    ctx->pc = 0x374234u;
    // 0x374234: 0x92030143  lbu         $v1, 0x143($s0)
    ctx->pc = 0x374234u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 323)));
    // 0x374238: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x374238u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x37423c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x37423cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x374240: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x374240u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x374244: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x374244u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x374248: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x374248u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x37424c: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x37424cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x374250: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x374250u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x374254: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x374254u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x374258: 0x648821  addu        $s1, $v1, $a0
    ctx->pc = 0x374258u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x37425c: 0x0  nop
    ctx->pc = 0x37425cu;
    // NOP
    ctx->pc = 0x374260u;
}
